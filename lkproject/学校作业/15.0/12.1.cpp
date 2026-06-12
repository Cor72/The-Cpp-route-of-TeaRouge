// 12.1 - Shape类派生Triangle、Square、Circle，虚函数计算面积
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual void print() = 0;
    virtual ~Shape() {}
};

class Triangle : public Shape {
public:
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {}
    double area() override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    void print() override {
        cout << "Triangle: sides=" << a << ", " << b << ", " << c
             << ", area=" << area() << endl;
    }
private:
    double a, b, c;
};

class Square : public Shape {
public:
    Square(double side) : side(side) {}
    double area() override {
        return side * side;
    }
    void print() override {
        cout << "Square: side=" << side << ", area=" << area() << endl;
    }
private:
    double side;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}
    double area() override {
        return 3.14159 * radius * radius;
    }
    void print() override {
        cout << "Circle: radius=" << radius << ", area=" << area() << endl;
    }
private:
    double radius;
};

int main() {
    Shape *shapes[3];
    shapes[0] = new Triangle(3, 4, 5);
    shapes[1] = new Square(5);
    shapes[2] = new Circle(3);

    for (int i = 0; i < 3; i++) {
        shapes[i]->print();
        delete shapes[i];
    }

    return 0;
}
