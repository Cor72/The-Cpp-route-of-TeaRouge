#include<iostream>
using namespace std;

class N
{
protected: int x;
public:
    N(){x=0;}
    N(int xx)
    {x=xx;}
};

class A: public virtual N //虚基类
{
protected: int a;
public:
    A(){a=0;}
    A(int xx, int aa): N(xx)
    {a=aa;}
};

class B: public virtual N //虚基类
{
protected: int b;
public:
    B(){b=0;}
    B(int xx, int bb): N(xx)
    {b=bb;}
};

class D: public A, public B
{
private: int d;
public:
    D(){d=0;}
    D(int xx, int aa, int bb, int dd): N(xx), A(xx, aa), B(xx, bb) //最派生类直接构造虚基类
    {d=dd;}
};

int main()
{
    D d1;
    D d2(1000, 1, 2, 4);
    cout<<sizeof(d2)<<endl;
    return 0;
}