#include <iostream>
using namespace std;

class Vector {
public:
    Vector(int s = 100);
    Vector(const Vector &v);
    ~Vector();
    void print();
private:
    int size;
    int *buffer;
};

Vector::Vector(int s) {
    size = s;
    buffer = new int[size];
    for (int i = 0; i < size; i++) {
        buffer[i] = i * i;
    }
}

Vector::Vector(const Vector &v) {
    size = v.size;
    buffer = new int[size];
    for (int i = 0; i < size; i++) {
        buffer[i] = v.buffer[i];
    }
}

Vector::~Vector() {
    delete[] buffer;
}

void Vector::print() {
    for (int i = 0; i < size; i++) {
        cout << buffer[i] << " ";
    }
    cout << endl;
}

int main() {
    Vector v1(10);
    Vector v2 = v1;
    
    v2.print();

    return 0;
}