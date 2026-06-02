#include <iostream>
using namespace std;

class point {
private:
    int x;
    int y;

public:
    point(int a, int b) {
        x = a;
        y = b;
    }
    point() {
        x = 0;
        y = 0;
    }
};

class circle {
private:
    float radius;
    point cenpoint;

public:
    circle(float r) : cenpoint(0, 0) {
        radius = r;
    }
    circle(float r, int a, int b) : cenpoint(a, b) {
        radius = r;
    }
};

int main() {
    circle c1(3.0);
    circle c2(5.0, 7, 8);
    return 0;
}