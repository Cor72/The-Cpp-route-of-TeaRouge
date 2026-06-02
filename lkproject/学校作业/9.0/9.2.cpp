#include <iostream>
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }

    Date(const Date &d) {
        year = d.year;
        month = d.month;
        day = d.day;
    }

    ~Date() {
    }

    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int getYear() {
        return year;
    }
};

int main() {
    Date d1(2024, 5, 20);
    Date d2 = d1;

    if (d2.isLeapYear()) {
        cout << d2.getYear() << " is a leap year." << endl;
    } else {
        cout << d2.getYear() << " is not a leap year." << endl;
    }

    return 0;
}