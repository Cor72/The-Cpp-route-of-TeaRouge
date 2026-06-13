// 12.3 - Time类，重载+和-运算符
#include <iostream>
using namespace std;

class Time {
public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {
        normalize();
    }

    // 重载 +
    Time operator+(const Time &t) const {
        return Time(hour + t.hour, minute + t.minute, second + t.second);
    }

    // 重载 -
    Time operator-(const Time &t) const {
        return Time(hour - t.hour, minute - t.minute, second - t.second);
    }

    void print() const {
        cout << hour << "h " << minute << "m " << second << "s" << endl;
    }
private:
    int hour;
    int minute;
    int second;

    // 规范化时间（进位/借位处理）
    void normalize() {
        // 先处理秒的进位
        minute += second / 60;
        second %= 60;
        if (second < 0) { second += 60; minute--; }

        // 处理分的进位
        hour += minute / 60;
        minute %= 60;
        if (minute < 0) { minute += 60; hour--; }
    }
};

int main() {
    Time t1(2, 45, 30);
    Time t2(1, 20, 45);

    cout << "t1 = "; t1.print();
    cout << "t2 = "; t2.print();

    Time t3 = t1 + t2;
    cout << "t1 + t2 = "; t3.print();

    Time t4 = t1 - t2;
    cout << "t1 - t2 = "; t4.print();

    return 0;
}
