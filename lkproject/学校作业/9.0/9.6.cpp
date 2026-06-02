#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point(double a = 0, double b = 0) {
        x = a;
        y = b;
    }

    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    void setX(double a) {
        x = a;
    }

    double getX() {
        return x;
    }

    void setY(double b) {
        y = b;
    }

    double getY() {
        return y;
    }

    void showPoint() {
        cout << "(" << x << ", " << y << ")";
    }
};

class Rectangle {
private:
    Point left;
    Point right;

public:
    Rectangle(Point l, Point r) : left(l), right(r) {
    }

    Rectangle(const Rectangle &r) : left(r.left), right(r.right) {
    }

    void setLeft(double x, double y) {
        left.setX(x);
        left.setY(y);
    }

    void setRight(double x, double y) {
        right.setX(x);
        right.setY(y);
    }

    double getPerimeter() {
        double width = fabs(right.getX() - left.getX());
        double height = fabs(right.getY() - left.getY());
        return 2 * (width + height);
    }

    double getArea() {
        double width = fabs(right.getX() - left.getX());
        double height = fabs(right.getY() - left.getY());
        return width * height;
    }

    bool isPointInRect(Point p) {
        bool inX = (p.getX() >= left.getX()) && (p.getX() <= right.getX());
        bool inY = (p.getY() >= left.getY()) && (p.getY() <= right.getY());
        return inX && inY;
    }

    void showRectangle() {
        cout << "Left: ";
        left.showPoint();
        cout << ", Right: ";
        right.showPoint();
        cout << endl;
    }
};

int main() {
    Point p1(1, 1);
    Point p2(5, 5);
    Rectangle r1(p1, p2);

    cout << "Perimeter: " << r1.getPerimeter() << endl;
    cout << "Area: " << r1.getArea() << endl;

    Point p3(3, 3);
    Point p4(6, 6);

    if (r1.isPointInRect(p3)) {
        cout << "Point(3,3) is inside the rectangle." << endl;
    } else {
        cout << "Point(3,3) is outside the rectangle." << endl;
    }

    if (r1.isPointInRect(p4)) {
        cout << "Point(6,6) is inside the rectangle." << endl;
    } else {
        cout << "Point(6,6) is outside the rectangle." << endl;
    }

    return 0;
}