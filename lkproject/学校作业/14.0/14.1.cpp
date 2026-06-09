#include<iostream>
using namespace std;

class Circle
{
    private:
        float radius;
    public:
        Circle(float r);
        float area();
        bool operator==(Circle c);
        bool operator>(Circle c);
};

Circle::Circle(float r)
{
    radius = r;
}
float Circle::area()
{
    return 3.14*radius*radius;
}
bool Circle::operator==(Circle c)
{
    if(radius == c.radius) return true;
    else return false;
}
bool Circle::operator>(Circle c)
{
    if(radius > c.radius) return true;
    else return false;
}

int main()
{
    Circle c1(10.0), c2(20.5);
    if(c1 == c2)
        cout<<"C1 and C2 are equal";
    else
        cout<<"C1 and C2 are not equal";
    cout<<endl;
    if(c1 > c2)
        cout<<"C1 is greater than C2";
    else
        cout<<"C1 is not greater than C2";
    return 0;
}