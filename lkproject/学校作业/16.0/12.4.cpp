// 12.4 - Counter类，重载单目++运算符（前置和后置，成员函数和友元函数）
#include <iostream>
using namespace std;

class Counter {
public:
    Counter(int val = 0) : value(val) {}

    // 成员函数重载前置 ++
    Counter& operator++() {
        value++;
        return *this;
    }

    // 成员函数重载后置 ++（int参数用于区分）
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    // 友元函数重载前置 ++
    friend Counter& operator--(Counter &c);
    // 友元函数重载后置 ++
    friend Counter operator--(Counter &c, int);

    void print() const {
        cout << "Counter value: " << value << endl;
    }
private:
    int value;
};

// 友元函数实现前置 --
Counter& operator--(Counter &c) {
    c.value--;
    return c;
}

// 友元函数实现后置 --
Counter operator--(Counter &c, int) {
    Counter temp = c;
    c.value--;
    return temp;
}

int main() {
    Counter c(10);
    cout << "Initial: "; c.print();

    // 测试成员函数重载的前置++
    ++c;
    cout << "After ++c: "; c.print();

    // 测试成员函数重载的后置++
    Counter c2 = c++;
    cout << "After c++ (old value): "; c2.print();
    cout << "After c++ (new value): "; c.print();

    // 测试友元函数重载的前置--
    --c;
    cout << "After --c: "; c.print();

    // 测试友元函数重载的后置--
    Counter c3 = c--;
    cout << "After c-- (old value): "; c3.print();
    cout << "After c-- (new value): "; c.print();

    return 0;
}
