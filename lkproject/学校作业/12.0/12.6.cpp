// 12.6 - 虚基类Person派生Leader、Engineer、Chairman
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(string name, int age) : name(name), age(age) {
        cout << "Person constructor: " << name << endl;
    }
    ~Person() {
        cout << "Person destructor: " << name << endl;
    }
    void ShowInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
protected:
    string name;
    int age;
};

class Leader : virtual public Person {
public:
    Leader(string name, int age, string position, string department)
        : Person(name, age), position(position), department(department) {
        cout << "Leader constructor: " << position << endl;
    }
    ~Leader() {
        cout << "Leader destructor" << endl;
    }
    void ShowInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
        cout << "Position: " << position << ", Department: " << department << endl;
    }
protected:
    string position;
    string department;
};

class Engineer : virtual public Person {
public:
    Engineer(string name, int age, string engPosition, string major)
        : Person(name, age), engPosition(engPosition), major(major) {
        cout << "Engineer constructor: " << engPosition << endl;
    }
    ~Engineer() {
        cout << "Engineer destructor" << endl;
    }
    void ShowInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
        cout << "Position: " << engPosition << ", Major: " << major << endl;
    }
protected:
    string engPosition;
    string major;
};

class Chairman : public Leader, public Engineer {
public:
    Chairman(string name, int age, string position, string department, string engPosition, string major)
        : Person(name, age), Leader(name, age, position, department), Engineer(name, age, engPosition, major) {
        cout << "Chairman constructor" << endl;
    }
    ~Chairman() {
        cout << "Chairman destructor" << endl;
    }
    void ShowInfo() {
        cout << "=== Chairman Info ===" << endl;
        cout << "Name: " << name << ", Age: " << age << endl;
        cout << "Leader Position: " << position << ", Department: " << department << endl;
        cout << "Engineer Position: " << engPosition << ", Major: " << major << endl;
    }
};

int main() {
    Chairman chairman("Wang Wu", 45, "Director", "R&D", "Senior Engineer", "Software Engineering");
    chairman.ShowInfo();
    return 0;
}
