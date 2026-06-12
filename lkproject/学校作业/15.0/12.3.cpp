// 12.3 - 写出下面程序的运行结果
// 运行结果分析：
// B *obptr = new D(5,10) 创建一个D对象，用B类指针指向它
//   -> 先调用 B(5)，设置 B::b = 5
//   -> 然后 b = y = 10，设置 D::b = 10
// obptr->print() 由于 print() 是虚函数，调用的是 D 类的 print()
//   -> 输出 D::b 的值，即 10
//
// 运行结果：10

// 以下是原程序代码：
#include<iostream>
using namespace std;

class B
{
public:
    B(int x) { b = x; }
    virtual void print() { cout << b << endl; }
protected:
    int b;
};

class D : public B
{
public:
    D(int x, int y) : B(x) { b = y; }
    void print() { cout << b << endl; }
private:
    int b;
};

int main()
{
    B *obptr = new D(5, 10);
    obptr->print();
    delete obptr;
    return 0;
}
