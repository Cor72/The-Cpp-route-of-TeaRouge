// 12.7.2 - 队列(queue)类
#include <iostream>
using namespace std;

class Queue {
public:
    Queue(int size) : size(size), front(0), rear(0), count(0) {
        data = new int[size];
    }
    ~Queue() {
        delete[] data;
    }
    bool enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return false;
        }
        data[rear] = value;
        rear = (rear + 1) % size;
        count++;
        return true;
    }
    bool dequeue(int &value) {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return false;
        }
        value = data[front];
        front = (front + 1) % size;
        count--;
        return true;
    }
    bool isEmpty() const {
        return count == 0;
    }
    bool isFull() const {
        return count == size;
    }
    int getCount() const {
        return count;
    }
    void print() const {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < count; i++) {
            cout << data[(front + i) % size] << " ";
        }
        cout << endl;
    }
private:
    int *data;
    int size;
    int front;
    int rear;
    int count;
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print();

    int val;
    q.dequeue(val);
    cout << "Dequeued: " << val << endl;
    q.print();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.print();

    cout << "Queue count: " << q.getCount() << endl;
    cout << "Is full: " << (q.isFull() ? "Yes" : "No") << endl;

    return 0;
}
