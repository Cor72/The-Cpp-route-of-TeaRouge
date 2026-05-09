#include <iostream>
#include <cstring>
using namespace std;

class employee {
private:
    char name[20];
    int empNo;
    float salary;
public:
    employee(const char *n, int no, float s) {
        strcpy(name, n);
        empNo = no;
        salary = s;
    }
    void setName(const char *n) {
        strcpy(name, n);
    }
    void setEmpNo(int no) {
        empNo = no;
    }
    void setSalary(float s) {
        salary = s;
    }
    char* getName() {
        return name;
    }
    int getEmpNo() {
        return empNo;
    }
    float getSalary() {
        return salary;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "EmpNo: " << empNo << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    employee emp("ZhangSan", 1001, 5000.0f);
    emp.display();
    emp.setSalary(6000.0f);
    cout << "New Salary: " << emp.getSalary() << endl;
    return 0;
}