#include <iostream>
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
    r1.showRectangle();

    Rectangle r2 = r1;
    r2.showRectangle();

    r2.setLeft(2, 2);
    r2.setRight(6, 6);
    r2.showRectangle();

    return 0;
}