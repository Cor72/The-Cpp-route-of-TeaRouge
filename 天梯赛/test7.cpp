#include <iostream>
using namespace std;

class Entry {  //链接栈的结点
public:
  Entry* next;  // 指向下一个结点的指针
  int data;     // 结点数据

  //**********found**********
  Entry(Entry* n, int d) : next(n), data(d) { }
};

class Stack {
  Entry* top;
public:
  Stack() : top(0) { }
  ~Stack()
  {
    while (top != 0) 
    {
      Entry* tmp = top;
      //**********found**********
      top = top->next;  // 让top指向下一个结点
      delete tmp;
    }
  }
  void push(int data)  // 入栈
//push函数是把入栈数据放入新结点中，并使之成为栈顶结点，原来的结点成为新结点的下一个结点
  {
    //**********found**********
    top = new Entry(top, data);
  }
  int pop()
  {
    if (top == 0) return 0;
    //**********found**********
    int result = top->data;  // 保存栈顶结点中的数据
    top = top->next;
    return result;
  }
};

int main()
{
  int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  Stack s;

  int i = 0;
  for (i = 0; i < 10; i++) {
    cout << a[i] << ' ';
    s.push(a[i]);
  }
  cout << endl;
  for (i = 0; i < 10; i++) {
    cout << s.pop() << ' ';
  }
  cout << endl;
  return 0;
}
