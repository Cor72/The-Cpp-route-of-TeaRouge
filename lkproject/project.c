#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
    int size;
} LinkedList;

void MakeEmpty(LinkedList* list);
int Length(LinkedList* list);
int Insert(LinkedList* list, int x, int i);
int Delete(LinkedList* list, int x);
int Remove(LinkedList* list, int i);
int Find(LinkedList* list, int x);
void Sort(LinkedList* list);
void Display(LinkedList* list);
void FreeList(LinkedList* list);

//置空
void MakeEmpty(LinkedList* list) {
    Node* current = list->head;
    Node* temp;
    
    //释放
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
    
    list->head = NULL;
    list->size = 0;
}

//长度
int Length(LinkedList* list) {
    return list->size;
}

//键入
int Insert(LinkedList* list, int x, int i) {
    if (i < 0 || i > list->size) {
        return 0;
    }
    
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        return 0;
    }
    
    newNode->data = x;
    
    if (i == 0) {
        newNode->next = list->head;
        list->head = newNode;
    } else {
        Node* current = list->head;
        for (int j = 1; j < i; j++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    
    list->size++;
    return 1;
}

//叉出去
int Delete(LinkedList* list, int x) {
    int deleted = 0;
    Node* current = list->head;
    Node* prev = NULL;
    Node* temp;
    
    while (current != NULL) {
        if (current->data == x) {
            temp = current;
            if (prev == NULL) {
                list->head = current->next;
            } else {
                prev->next = current->next;
            }
            current = current->next;
            free(temp);
            list->size--;
            deleted = 1;
        } else {
            prev = current;
            current = current->next;
        }
    }
    
    return deleted;
}

//叉出去*2
int Remove(LinkedList* list, int i) {
    if (i < 1 || i > list->size) {
        return 0;
    }
    
    Node* current = list->head;
    Node* temp;
    
    if (i == 1) {
        temp = list->head;
        list->head = list->head->next;
    } else {
        for (int j = 1; j < i - 1; j++) {
            current = current->next;
        }
        temp = current->next;
        current->next = temp->next;
    }
    
    free(temp);
    list->size--;
    return 1;
}

//查询
int Find(LinkedList* list, int x) {
    Node* current = list->head;
    
    while (current != NULL) {
        if (current->data == x) {
            return 1;
        }
        current = current->next;
    }
    
    return 0;
}

//排序
void Sort(LinkedList* list) {
    if (list->size < 2) {
        return;  // No need to sort
    }
    
    int swapped;
    Node* current;
    Node* last = NULL;
    
    do {
        swapped = 0;
        current = list->head;
        
        while (current->next != last) {
            if (current->data > current->next->data) {
                //wc我为啥要用冒泡
                //我记得C里头是有sort的来着
                //C的sort是咋实现的来着
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = 1;
            }
            current = current->next;
        }
        last = current;
    } while (swapped);
}

//展示
void Display(LinkedList* list) {
    if (list->head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    Node* current = list->head;
    printf("List contents: ");
    
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    
    printf("\n");
}

//不被打死的好习惯增加了
void FreeList(LinkedList* list) {
    MakeEmpty(list);
}

//套壳打印
int main() {
    LinkedList list;
    list.head = NULL;
    list.size = 0;
    
    int choice, x, i, result;
    
    do {
        printf("\n===== Linked List Operations Menu =====\n");
        printf("1. MakeEmpty()\n");
        printf("2. Length()\n");
        printf("3. Insert(x, i)\n");
        printf("4. Delete(x)\n");
        printf("5. Remove(i)\n");
        printf("6. Find(x)\n");
        printf("7. Sort()\n");
        printf("8. Display()\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                MakeEmpty(&list);
                printf("List has been emptied.\n");
                break;
                
            case 2:
                printf("List length: %d\n", Length(&list));
                break;
                
            case 3:
                printf("Enter value x to insert: ");
                scanf("%d", &x);
                printf("Enter position i (0=insert at head): ");
                scanf("%d", &i);
                result = Insert(&list, x, i);
                if (result) {
                    printf("Insertion successful.\n");
                } else {
                    printf("Insertion failed (invalid position or memory error).\n");
                }
                break;
                
            case 4:
                printf("Enter value x to delete: ");
                scanf("%d", &x);
                result = Delete(&list, x);
                if (result) {
                    printf("Deletion successful (at least one node deleted).\n");
                } else {
                    printf("Deletion failed (value not found).\n");
                }
                break;
                
            case 5:
                printf("Enter position i to remove: ");
                scanf("%d", &i);
                result = Remove(&list, i);
                if (result) {
                    printf("Removal successful.\n");
                } else {
                    printf("Removal failed (invalid position).\n");
                }
                break;
                
            case 6:
                printf("Enter value x to find: ");
                scanf("%d", &x);
                result = Find(&list, x);
                if (result) {
                    printf("Value %d found in the list.\n", x);
                } else {
                    printf("Value %d not found in the list.\n", x);
                }
                break;
                
            case 7:
                Sort(&list);
                printf("List has been sorted in ascending order.\n");
                break;
                
            case 8:
                Display(&list);
                break;
                
            case 0:
                printf("Exiting program...\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
    
    //释放！！
    FreeList(&list);
    
    return 0;
}
