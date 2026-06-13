// 12.1 - complex类，重载+和-运算符（友元函数）
#include <iostream>
using namespace std;

class complex {
public:
    complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // 友元函数重载 +
    friend complex operator+(const complex &c1, const complex &c2);
    // 友元函数重载 -
    friend complex operator-(const complex &c1, const complex &c2);

    void print() const {
        cout << real;
        if (imag >= 0) cout << "+";
        cout << imag << "i" << endl;
    }
private:
    double real;
    double imag;
};

complex operator+(const complex &c1, const complex &c2) {
    return complex(c1.real + c2.real, c1.imag + c2.imag);
}

complex operator-(const complex &c1, const complex &c2) {
    return complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main() {
    complex c1(3, 4);
    complex c2(1, 2);

    cout << "c1 = "; c1.print();
    cout << "c2 = "; c2.print();

    complex c3 = c1 + c2;
    cout << "c1 + c2 = "; c3.print();

    complex c4 = c1 - c2;
    cout << "c1 - c2 = "; c4.print();

    return 0;
}
