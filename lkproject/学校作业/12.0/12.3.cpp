// 12.3 - Person类派生出Student类，增加学号xh
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(string name, int age) : name(name), age(age) {
        cout << "Person constructor called: " << name << ", " << age << endl;
    }
    ~Person() {
        cout << "Person destructor called: " << name << endl;
    }
    void print() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
protected:
    string name;
    int age;
};

class Student : public Person {
public:
    Student(string name, int age, string xh) : Person(name, age), xh(xh) {
        cout << "Student constructor called: " << xh << endl;
    }
    ~Student() {
        cout << "Student destructor called: " << xh << endl;
    }
    void print() {
        cout << "Name: " << name << ", Age: " << age << ", Student ID: " << xh << endl;
    }
private:
    string xh;
};

int main() {
    Student s("Zhang San", 20, "2023001");
    s.print();
    return 0;
}
