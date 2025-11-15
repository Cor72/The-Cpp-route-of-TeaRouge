/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList {
public:
struct Node
{
    int val;
    Node* next;
    Node(int val):val(val),next(nullptr){}
};

    MyLinkedList() {
        _head=new Node(0);
        _size=0;
    }
    
    int get(int index) {
        if(index>(_size-1)||index<0)
        {
            return -1;
        }
        Node* cur=_head->next;
        while(index--)
        {
            cur=cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        Node* NewNode=new Node(val);
        NewNode->next=_head->next;
        _head->next=NewNode;
        _size++;
    }
    
    void addAtTail(int val) {
        Node* NewNode=new Node(val);
        Node*cur=_head;
        while(cur->next!=nullptr)
        {
            cur=cur->next;
        }
        cur->next=NewNode;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>_size) return;
        if(index<0) index=0;
        Node* NewNode=new Node(val);
        Node* cur= _head;
        while(index--)
        {
            cur=cur->next;
        }
        NewNode->next=cur->next;
        cur->next=NewNode;
        _size++;
    }
    
    void deleteAtIndex(int index) {
        if(index>=_size||index<0)
        {
            return;
        }
        Node* cur=_head;
        while(index--)
        {
            cur=cur->next;
        }
        Node* tem = cur->next;
        cur->next=cur->next->next;
        delete tem;
        tem=nullptr;
        _size--;
    }
    public:
    int _size;
    Node* _head;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

