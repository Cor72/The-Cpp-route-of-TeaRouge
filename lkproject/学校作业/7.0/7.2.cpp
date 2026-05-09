#include <bits/stdc++.h>
using namespace std;

class counter {
private:
    int value;
public:
    counter(int number) {
        value = number;
    }
    void increment() {
        value++;
    }
    void decrement() {
        value--;
    }
    int getvalue() {
        return value;
    }
    void show() {
        cout << value << endl;
    }
};

int main() {
    counter c(10);
    c.show();
    c.increment();
    c.show();
    c.decrement();
    cout << c.getvalue() << endl;
    return 0;
}