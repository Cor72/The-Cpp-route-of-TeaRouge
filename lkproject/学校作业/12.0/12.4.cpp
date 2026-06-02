// 12.4 - automobile类派生出car和truck
#include <iostream>
#include <string>
using namespace std;

class automobile {
public:
    automobile(string brand, double speed) : brand(brand), speed(speed) {
        cout << "Automobile constructor: " << brand << endl;
    }
    ~automobile() {
        cout << "Automobile destructor: " << brand << endl;
    }
    void run() {
        cout << brand << " is running at " << speed << " km/h" << endl;
    }
    void stop() {
        cout << brand << " has stopped" << endl;
    }
protected:
    string brand;
    double speed;
};

class car : public automobile {
public:
    car(string brand, double speed, int num) : automobile(brand, speed), num(num) {
        cout << "Car constructor: num=" << num << endl;
    }
    ~car() {
        cout << "Car destructor" << endl;
    }
    void print() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h, Passengers: " << num << endl;
    }
private:
    int num;
};

class truck : public automobile {
public:
    truck(string brand, double speed, double load) : automobile(brand, speed), load(load) {
        cout << "Truck constructor: load=" << load << " tons" << endl;
    }
    ~truck() {
        cout << "Truck destructor" << endl;
    }
    void print() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h, Load: " << load << " tons" << endl;
    }
private:
    double load;
};

int main() {
    car c("BMW", 120, 5);
    c.run();
    c.print();
    c.stop();

    cout << endl;

    truck t("Volvo", 80, 15);
    t.run();
    t.print();
    t.stop();

    return 0;
}
