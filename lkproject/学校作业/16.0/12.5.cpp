// 12.5 - 选做题：Checking和Savings银行账户类
#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    Account(string name, double balance) : name(name), balance(balance) {}
    virtual ~Account() {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    virtual bool withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            return true;
        }
        cout << "Insufficient funds!" << endl;
        return false;
    }

    double getBalance() const { return balance; }
    string getName() const { return name; }
    virtual void print() const = 0;
protected:
    string name;
    double balance;
};

class CheckingAccount : public Account {
public:
    static int nextId;

    CheckingAccount(string name, double balance)
        : Account(name, balance) {
        accountId = nextId++;
    }

    void orderCheckbook() {
        cout << "Checkbook ordered for account " << accountId << endl;
    }

    void print() const override {
        cout << "[Checking] " << name << " (ID: " << accountId
             << "), Balance: " << balance << endl;
    }
private:
    int accountId;
};

int CheckingAccount::nextId = 100000;

class SavingsAccount : public Account {
public:
    static int nextId;

    SavingsAccount(string name, double balance)
        : Account(name, balance) {
        accountId = nextId++;
    }

    void addInterest() {
        double rate = (balance > 1000) ? 0.06 : 0.03;
        balance += balance * rate;
        cout << "Interest added at rate " << (rate * 100) << "%" << endl;
    }

    void print() const override {
        cout << "[Savings] " << name << " (ID: " << accountId
             << "), Balance: " << balance << endl;
    }
private:
    int accountId;
};

int SavingsAccount::nextId = 500000;

int main() {
    // 测试活期账户
    CheckingAccount ca("Zhang San", 5000);
    ca.print();
    ca.deposit(2000);
    cout << "After deposit 2000: "; ca.print();
    ca.withdraw(3000);
    cout << "After withdraw 3000: "; ca.print();
    ca.orderCheckbook();

    cout << endl;

    // 测试储蓄账户
    SavingsAccount sa("Li Si", 2000);
    sa.print();
    sa.deposit(1000);
    cout << "After deposit 1000: "; sa.print();
    sa.addInterest();
    cout << "After interest: "; sa.print();
    sa.withdraw(5000);
    cout << "After withdraw 5000: "; sa.print();

    return 0;
}
