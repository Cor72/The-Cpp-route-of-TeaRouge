#include<iostream>
using namespace std;

class A
{
    private:
        int *p;
        int size;
    public:
        A(int n)
        {
            size = n;
            p = new int[size];
        };
        A(A &x)
        {
            size = x.size;
            p = new int[size];
        };
        ~A()
        {
            delete []p;
        };
        int &operator[](int n)
        {
            if(n<0 && n>=size)
            {
                cout<<"Invalid index"<<endl;
                exit(1);
            }
            return p[n];
        };
        
};
int main()
{
    A a(5);
    A b=a;
    a[3]=4;
    cout<<a[3]<<endl;
    b[5]=5;
    cout<<b[5]<<endl;
}