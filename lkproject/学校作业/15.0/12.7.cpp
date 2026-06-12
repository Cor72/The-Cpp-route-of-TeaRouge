// 12.7 - 选做题：线段类
#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    Point(double x, double y) : x(x), y(y) {}
    double getX() const { return x; }
    double getY() const { return y; }
    void print() const {
        cout << "(" << x << ", " << y << ")";
    }
private:
    double x;
    double y;
};

class LineSegment {
public:
    LineSegment(Point p1, Point p2) : p1(p1), p2(p2) {}
    void printEndpoints() {
        cout << "Endpoint 1: ";
        p1.print();
        cout << endl;
        cout << "Endpoint 2: ";
        p2.print();
        cout << endl;
    }
    double length() {
        double dx = p2.getX() - p1.getX();
        double dy = p2.getY() - p1.getY();
        return sqrt(dx * dx + dy * dy);
    }
private:
    Point p1;
    Point p2;
};

int main() {
    Point a(1.0, 2.0);
    Point b(4.0, 6.0);
    LineSegment seg(a, b);

    seg.printEndpoints();
    cout << "Length: " << seg.length() << endl;

    return 0;
}
