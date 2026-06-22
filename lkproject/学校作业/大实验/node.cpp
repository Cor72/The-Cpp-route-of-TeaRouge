#include <iostream>
using namespace std;

// ================= 数据结构定义 =================

// 1. 数据元素结点
struct QNode {
    int data;       // 数据域
    QNode* next;    // 指针域
};

// 2. 队列的队首指针和队尾指针结点
struct LinkQueue {
    QNode* front;   // 队首指针
    QNode* rear;    // 队尾指针
};

// ================= 功能函数实现 =================

// (1) 链队列的初始化，生成一个空链队列
void InitQueue(LinkQueue* &Q) {
    Q = new LinkQueue;          // 分配队列指针结点
    Q->front = NULL;
    Q->rear = NULL;
    cout << "链队列初始化成功！" << endl;
}

// (2) 链队列的入队操作，在队尾插入元素e
void EnQueue(LinkQueue* Q, int e) {
    QNode* newNode = new QNode; // 创建新结点
    newNode->data = e;
    newNode->next = NULL;
    
    if (Q->rear == NULL) {      // 如果队列为空
        Q->front = newNode;
        Q->rear = newNode;
    } else {
        Q->rear->next = newNode; // 链接到队尾
        Q->rear = newNode;       // 修改队尾指针
    }
    cout << "元素 " << e << " 入队成功！" << endl;
}

// (3) 链队列的出队操作，返回队首元素值并删除队首结点
bool DeQueue(LinkQueue* Q, int &e) {
    if (Q->front == NULL) {     // 队列为空
        cout << "队列为空，无法出队！" << endl;
        return false;
    }
    QNode* temp = Q->front;     // 暂存队首结点
    e = temp->data;             // 获取队首元素值
    Q->front = temp->next;      // 队首指针后移
    
    if (Q->front == NULL) {     // 如果出队后队列为空
        Q->rear = NULL;         // 队尾指针也置空
    }
    delete temp;                // 释放原队首结点
    cout << "元素 " << e << " 出队成功！" << endl;
    return true;
}

// (4) 链队列的输出操作，输出所有元素
void PrintQueue(LinkQueue* Q) {
    if (Q->front == NULL) {
        cout << "当前队列为空！" << endl;
        return;
    }
    cout << "队列元素（从队首到队尾）：";
    QNode* p = Q->front;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// (5) 链队列的求队长操作，返回结点个数
int QueueLength(LinkQueue* Q) {
    int count = 0;
    QNode* p = Q->front;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

// (6) 链队列的置空操作，删除所有结点，仅留下指针结点
void ClearQueue(LinkQueue* Q) {
    QNode* p = Q->front;
    while (p != NULL) {
        QNode* temp = p;
        p = p->next;
        delete temp;            // 逐个释放数据结点
    }
    Q->front = NULL;
    Q->rear = NULL;
    cout << "链队列已置空！" << endl;
}

// (7) 链队列的查找操作，查找数值为x的结点
int FindQueue(LinkQueue* Q, int x) {
    QNode* p = Q->front;
    while (p != NULL) {
        if (p->data == x) {
            return 1;           // 查找成功
        }
        p = p->next;
    }
    return 0;                   // 查找失败
}

// ================= 主函数及菜单 =================
void ShowMenu() {
    cout << "\n====================================" << endl;
    cout << "       链队列及其操作菜单系统       " << endl;
    cout << "====================================" << endl;
    cout << "  1. 初始化链队列" << endl;
    cout << "  2. 入队操作" << endl;
    cout << "  3. 出队操作" << endl;
    cout << "  4. 输出队列元素" << endl;
    cout << "  5. 求队列长度" << endl;
    cout << "  6. 置空队列" << endl;
    cout << "  7. 查找元素" << endl;
    cout << "  0. 退出系统" << endl;
    cout << "====================================" << endl;
    cout << "请输入您的选择 (0-7): ";
}

int main() {
    LinkQueue* Q = NULL; // 声明队列指针
    int choice, e, x, len, result;
    
    while (true) {
        ShowMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                if (Q != NULL) {
                    cout << "队列已存在，是否重新初始化？(1:是, 0:否): ";
                    int confirm;
                    cin >> confirm;
                    if (confirm == 1) {
                        ClearQueue(Q); // 先释放原有内存
                        delete Q;
                        InitQueue(Q);
                    }
                } else {
                    InitQueue(Q);
                }
                break;
                
            case 2:
                if (Q == NULL) {
                    cout << "请先初始化队列！(选择1)" << endl;
                } else {
                    cout << "请输入要入队的元素: ";
                    cin >> e;
                    EnQueue(Q, e);
                }
                break;
                
            case 3:
                if (Q == NULL) {
                    cout << "请先初始化队列！(选择1)" << endl;
                } else {
                    DeQueue(Q, e);
                }
                break;
                
            case 4:
                if (Q == NULL) {
                    cout << "请先初始化队列！(选择1)" << endl;
                } else {
                    PrintQueue(Q);
                }
                break;
                
            case 5:
                if (Q == NULL) {
                    cout << "请先初始化队列！(选择1)" << endl;
                } else {
                    len = QueueLength(Q);
                    cout << "当前队列长度为: " << len << endl;
                }
                break;
                
            case 6:
                if (Q == NULL) {
                    cout << "请先初始化队列！(选择1)" << endl;
                } else {
                    ClearQueue(Q);
                }
                break;
                
            case 7:
                if (Q == NULL) {
                    cout << "请先初始化队列！(选择1)" << endl;
                } else {
                    cout << "请输入要查找的元素: ";
                    cin >> x;
                    result = FindQueue(Q, x);
                    if (result == 1) {
                        cout << "查找成功，元素 " << x << " 在队列中。" << endl;
                    } else {
                        cout << "查找失败，队列中不存在元素 " << x << "。" << endl;
                    }
                }
                break;
                
            case 0:
                if (Q != NULL) {
                    ClearQueue(Q); // 退出前释放内存，防止内存泄漏
                    delete Q;
                }
                cout << "感谢使用，系统已退出。" << endl;
                system("pause");
                return 0;
                
            default:
                cout << "输入无效，请重新输入 0-7 之间的数字！" << endl;
        }
    }
    return 0;
}