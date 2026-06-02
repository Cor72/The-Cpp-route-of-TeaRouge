// 12.7.1 - Point和Rectangle类
#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    Point(double x, double y) : x(x), y(y) {}
    double getX() const { return x; }
    double getY() const { return y; }
private:
    double x;
    double y;
};

class Rectangle {
public:
    Rectangle(Point bl, Point tr) : bottomLeft(bl), topRight(tr) {}
    double perimeter() {
        double width = abs(topRight.getX() - bottomLeft.getX());
        double height = abs(topRight.getY() - bottomLeft.getY());
        return 2 * (width + height);
    }
    double area() {
        double width = abs(topRight.getX() - bottomLeft.getX());
        double height = abs(topRight.getY() - bottomLeft.getY());
        return width * height;
    }
    void print() {
        cout << "Bottom-Left: (" << bottomLeft.getX() << ", " << bottomLeft.getY() << ")" << endl;
        cout << "Top-Right: (" << topRight.getX() << ", " << topRight.getY() << ")" << endl;
        cout << "Perimeter: " << perimeter() << endl;
        cout << "Area: " << area() << endl;
    }
private:
    Point bottomLeft;
    Point topRight;
};

int main() {
    Point bl(2.1, 3.2);
    Point tr(5.2, 6.3);
    Rectangle rect(bl, tr);
    rect.print();
    return 0;
}
