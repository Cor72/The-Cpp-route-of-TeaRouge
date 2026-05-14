#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
public:
    Circle(float r = 1.0);
    void setRadius(float r);
    float getRadius();
    float area();
    friend Circle compareCircle(Circle c1, Circle c2);
};

Circle::Circle(float r)
{
    radius=r;
    cout << "Circle called!" << endl;
}
void Circle::setRadius(float r)
{
    this->radius = r;
}

float Circle::getRadius()
{
    return this->radius;
}

float Circle::area()
{
    return 3.14 * this->radius * this->radius;
}
Circle compareCircle(Circle c1, Circle c2)
{
    if (c1.area() > c2.area())
        return c1;
    else
        return c2;
}

int main()
{
    Circle c;
    float r;
    cin >> r;
    c.setRadius(r);
    cout << c.getRadius() << "," << c.area() << endl;
    cout << compareCircle(c, Circle(5)).getRadius() << endl;
    return 0;
}