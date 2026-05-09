#include <iostream>
using namespace std;

class Rational {
private:
    int num;
    int den;

    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

public:
    Rational(int n = 1, int d = 1) {
        if (d == 0) d = 1;
        if (d < 0) {
            n = -n;
            d = -d;
        }
        num = n;
        den = d;
    }

    void assign(int n, int d) {
        if (d == 0) d = 1;
        if (d < 0) {
            n = -n;
            d = -d;
        }
        num = n;
        den = d;
    }

    void simplify() {
        int g = gcd(abs(num), den);
        num /= g;
        den /= g;
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Rational r(6, 8);
    cout << "Original: ";
    r.display();

    r.simplify();
    cout << "Simplified: ";
    r.display();

    r.assign(10, -4);
    cout << "Assigned: ";
    r.display();

    r.simplify();
    cout << "Simplified: ";
    r.display();

    return 0;
}