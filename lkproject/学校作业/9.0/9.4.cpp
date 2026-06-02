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
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    p1.setX(3.5);
    p1.setY(4.5);
    p1.showPoint();

    Point p2(1.0, 2.0);
    p2.showPoint();

    Point p3 = p2;
    p3.showPoint();

    return 0;
}