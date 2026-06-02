// 12.2 - 写出以下程序的运行结果
// 运行结果分析：
// D obj(5,10) 调用 D 的构造函数
//   -> 先调用 B(5)，设置 B::b = 5
//   -> 然后 b = y = 10，设置 D::b = 10
// obj.print() 调用的是 D 类的 print() 函数
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
    void print() { cout << b << endl; }
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
    D obj(5, 10);
    obj.print();
    return 0;
}
