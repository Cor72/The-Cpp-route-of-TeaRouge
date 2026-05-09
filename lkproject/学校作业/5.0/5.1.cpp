#include <iostream>
using namespace std;

class Circle
{
    float radius;
public:
    void setRadius(float r);
    float area();
    float perimeter();
};

void Circle::setRadius(float r)
{
    radius = r;
}

float Circle::area()
{
    return 3.14 * radius * radius;
}

float Circle::perimeter()
{
    return 3.14 * 2 * radius;
}

int main()
{
    Circle c;
    float r;
    cin >> r;
    c.setRadius(r);
    cout << c.area() << endl;
    return 0;
}