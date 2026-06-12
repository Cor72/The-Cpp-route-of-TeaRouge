// 12.2 - Teacher类派生Lecturer、AssociateProfessor、Professor，虚函数计算工资
#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    Teacher(string name, int hours) : name(name), hours(hours) {}
    virtual double calculateSalary() = 0;
    virtual void print() = 0;
    virtual ~Teacher() {}
protected:
    string name;
    int hours; // 课时数
};

class Lecturer : public Teacher {
public:
    Lecturer(string name, int hours) : Teacher(name, hours) {}
    double calculateSalary() override {
        return 800 + hours * 40 + 1300;
    }
    void print() override {
        cout << "Lecturer " << name << ": salary=" << calculateSalary() << endl;
    }
};

class AssociateProfessor : public Teacher {
public:
    AssociateProfessor(string name, int hours) : Teacher(name, hours) {}
    double calculateSalary() override {
        return 900 + hours * 45 + 1800;
    }
    void print() override {
        cout << "Associate Professor " << name << ": salary=" << calculateSalary() << endl;
    }
};

class Professor : public Teacher {
public:
    Professor(string name, int hours) : Teacher(name, hours) {}
    double calculateSalary() override {
        return 1000 + hours * 50 + 2300;
    }
    void print() override {
        cout << "Professor " << name << ": salary=" << calculateSalary() << endl;
    }
};

int main() {
    Teacher *teachers[3];
    teachers[0] = new Lecturer("Zhang", 20);
    teachers[1] = new AssociateProfessor("Li", 15);
    teachers[2] = new Professor("Wang", 10);

    for (int i = 0; i < 3; i++) {
        teachers[i]->print();
        delete teachers[i];
    }

    return 0;
}
