// 12.4 - employee类派生worker、technician、salesman，虚函数pay
#include <iostream>
#include <string>
using namespace std;

class employee {
public:
    employee(string name, int empNo, double salary) : name(name), empNo(empNo), salary(salary) {}
    virtual float pay() = 0;
    virtual void print() = 0;
    virtual ~employee() {}
protected:
    string name;
    int empNo;
    double salary;
};

class worker : public employee {
public:
    worker(string name, int empNo, int productNum)
        : employee(name, empNo, 0), productNum(productNum) {}
    float pay() override {
        salary = productNum * 20 * 0.2;
        return salary;
    }
    void print() override {
        pay();
        cout << "Worker " << name << " (No." << empNo << "): salary=" << salary << endl;
    }
private:
    int productNum; // 每月生产产品数量
};

class technician : public employee {
public:
    technician(string name, int empNo, int workHours)
        : employee(name, empNo, 0), workHours(workHours) {}
    float pay() override {
        salary = workHours * 50;
        return salary;
    }
    void print() override {
        pay();
        cout << "Technician " << name << " (No." << empNo << "): salary=" << salary << endl;
    }
private:
    int workHours; // 每月工作时数
};

class salesman : public employee {
public:
    salesman(string name, int empNo, double monthlysales)
        : employee(name, empNo, 0), monthlysales(monthlysales) {}
    float pay() override {
        salary = monthlysales * 0.05;
        return salary;
    }
    void print() override {
        pay();
        cout << "Salesman " << name << " (No." << empNo << "): salary=" << salary << endl;
    }
private:
    double monthlysales; // 月销售额
};

float CalculateSalary(employee *emptr) {
    return emptr->pay();
}

int main() {
    worker w("Zhang", 1001, 100);
    technician t("Li", 2001, 160);
    salesman s("Wang", 3001, 50000);

    cout << "Worker salary: " << CalculateSalary(&w) << endl;
    cout << "Technician salary: " << CalculateSalary(&t) << endl;
    cout << "Salesman salary: " << CalculateSalary(&s) << endl;

    return 0;
}
