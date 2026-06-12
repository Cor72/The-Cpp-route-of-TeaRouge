// 12.5 - Vehicle基类派生Bicycle、Motorcar、Motorcycle
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void Run() = 0;
    virtual void Stop() = 0;
    virtual ~Vehicle() {}
};

class Bicycle : virtual public Vehicle {
public:
    void Run() override {
        cout << "Bicycle is running (pedaling)" << endl;
    }
    void Stop() override {
        cout << "Bicycle stopped (hand brake)" << endl;
    }
};

class Motorcar : virtual public Vehicle {
public:
    void Run() override {
        cout << "Motorcar is running (engine started)" << endl;
    }
    void Stop() override {
        cout << "Motorcar stopped (foot brake)" << endl;
    }
};

class Motorcycle : public Bicycle, public Motorcar {
public:
    void Run() override {
        cout << "Motorcycle is running (engine started, two wheels)" << endl;
    }
    void Stop() override {
        cout << "Motorcycle stopped (hand brake + engine off)" << endl;
    }
};

int main() {
    Vehicle *v;

    Bicycle b;
    v = &b;
    v->Run();
    v->Stop();

    cout << endl;

    Motorcar m;
    v = &m;
    v->Run();
    v->Stop();

    cout << endl;

    Motorcycle mc;
    v = &mc;
    v->Run();
    v->Stop();

    return 0;
}
