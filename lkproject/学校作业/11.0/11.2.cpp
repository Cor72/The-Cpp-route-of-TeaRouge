#include <iostream>
using namespace std;

class B1 {
protected:
    int b1;
public:
    B1(int i) {
        b1 = i;
        cout << "Constructor B1. " << endl;
    }
};

class B2: public B1 {
protected:
    int b2;
public:
    B2(int i) : B1(i) {
        b2 = i;
        cout << "Constructor B2. " << endl;
    }
};

class B3 {
protected:
    int b3;
public:
    B3(int j) {
        b3 = j;
        cout << "Constructor B3. " << endl;
    }
};

class D: public B2, public B3 {
protected:
    int d;
public:
    D(int i, int j) : B2(i), B3(j) {
        d = i + j;
        cout << "Constructor D. " << endl;
    }
};

int main() {
    D obj(1, 2);
    return 0;
}