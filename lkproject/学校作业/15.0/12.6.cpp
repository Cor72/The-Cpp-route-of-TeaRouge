// 12.6 - 虚析构函数的程序分析
// 运行结果分析：
// Base *pb = new Derived() 创建一个Derived对象
// delete pb 时，由于析构函数是虚函数，会先调用Derived的析构函数，再调用Base的析构函数
//
// 运行结果：
// Derived Destructor!
// Base Destructor!
//
// 体会：虚析构函数确保通过基类指针删除派生类对象时，
// 派生类的析构函数能被正确调用，避免资源泄漏。

// 以下是原程序代码（修正了变量名错误）：
#include<iostream>
using namespace std;

class Base
{
public:
    virtual ~Base() {
        cout << "Base Destructor!" << endl;
    }
};

class Derived : public Base
{
public:
    ~Derived() {
        cout << "Derived Destructor!" << endl;
    }
};

int main()
{
    Base *pb;
    pb = new Derived();
    delete pb;
    return 0;
}
