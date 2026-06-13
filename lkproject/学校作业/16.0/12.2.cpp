// 12.2 - Point3D类，重载+、-、=、==运算符
#include <iostream>
using namespace std;

class Point3D {
public:
    Point3D(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

    // 重载 +
    Point3D operator+(const Point3D &p) const {
        return Point3D(x + p.x, y + p.y, z + p.z);
    }

    // 重载 -
    Point3D operator-(const Point3D &p) const {
        return Point3D(x - p.x, y - p.y, z - p.z);
    }

    // 重载 =
    Point3D& operator=(const Point3D &p) {
        if (this != &p) {
            x = p.x;
            y = p.y;
            z = p.z;
        }
        return *this;
    }

    // 重载 ==
    bool operator==(const Point3D &p) const {
        return x == p.x && y == p.y && z == p.z;
    }

    void print() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
private:
    int x, y, z;
};

int main() {
    Point3D p1(1, 2, 3);
    Point3D p2(4, 5, 6);

    cout << "p1 = "; p1.print();
    cout << "p2 = "; p2.print();

    Point3D p3 = p1 + p2;
    cout << "p1 + p2 = "; p3.print();

    Point3D p4 = p1 - p2;
    cout << "p1 - p2 = "; p4.print();

    Point3D p5;
    p5 = p1;
    cout << "p5 = p1 => p5 = "; p5.print();

    cout << "p1 == p2: " << (p1 == p2 ? "true" : "false") << endl;
    cout << "p1 == p5: " << (p1 == p5 ? "true" : "false") << endl;

    return 0;
}
