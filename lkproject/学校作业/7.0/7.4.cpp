#include <iostream>
#include <cstring>
using namespace std;

class automobile {
private:
    char brand[20];
    float load;
    float speed;
public:
    automobile(const char *b, float l, float s) {
        strcpy(brand, b);
        load = l;
        speed = s;
    }
    void setBrand(const char *b) {
        strcpy(brand, b);
    }
    void setLoad(float l) {
        load = l;
    }
    void setSpeed(float s) {
        speed = s;
    }
    char* getBrand() {
        return brand;
    }
    float getLoad() {
        return load;
    }
    float getSpeed() {
        return speed;
    }
    void startup() {
        cout << "The automobile is starting!" << endl;
    }
    void run() {
        cout << "The automobile is running!" << endl;
    }
    void stop() {
        cout << "The automobile is stopping!" << endl;
    }
};

int main() {
    automobile car("Toyota", 1.5f, 120.0f);
    car.startup();
    car.run();
    car.stop();
    return 0;
}
