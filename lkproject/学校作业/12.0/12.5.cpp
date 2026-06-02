// 12.5 - Student、Teacher、TA类（多继承）
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student(string name, string xh) : name(name), xh(xh) {
        cout << "Student constructor: " << name << endl;
    }
    ~Student() {
        cout << "Student destructor: " << name << endl;
    }
    void ShowInfo() {
        cout << "=== Student Info ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Student ID: " << xh << endl;
    }
protected:
    string name;
    string xh;
};

class Teacher {
public:
    Teacher(string name, string workId, string title, string course, int weeklyHours)
        : name(name), workId(workId), title(title), course(course), weeklyHours(weeklyHours) {
        cout << "Teacher constructor: " << name << endl;
    }
    ~Teacher() {
        cout << "Teacher destructor: " << name << endl;
    }
    void ShowInfo() {
        cout << "=== Teacher Info ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Work ID: " << workId << endl;
        cout << "Title: " << title << endl;
        cout << "Course: " << course << endl;
        cout << "Weekly Hours: " << weeklyHours << endl;
    }
protected:
    string name;
    string workId;
    string title;
    string course;
    int weeklyHours;
};

class TA : public Student, public Teacher {
public:
    TA(string name, string xh, string workId, string title, string course, int weeklyHours)
        : Student(name, xh), Teacher(name, workId, title, course, weeklyHours) {
        cout << "TA constructor: " << name << endl;
    }
    ~TA() {
        cout << "TA destructor" << endl;
    }
    void ShowInfo() {
        cout << "=== TA Info ===" << endl;
        cout << "Name: " << Student::name << endl;
        cout << "Student ID: " << xh << endl;
        cout << "Work ID: " << workId << endl;
        cout << "Title: " << title << endl;
        cout << "Course: " << course << endl;
        cout << "Weekly Hours: " << weeklyHours << endl;
    }
};

int main() {
    TA ta("Li Si", "2023002", "T1001", "Teaching Assistant", "C++ Programming", 6);
    ta.ShowInfo();
    return 0;
}
