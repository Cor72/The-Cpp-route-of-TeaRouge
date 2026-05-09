#include <iostream>
using namespace std;

const float PI = 3.1415926f;
const float FENCE_PRICE = 35.0f;
const float CONCRETE_PRICE = 20.0f;

class Circle {
private:
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    float circumference() {
        return 2 * PI * radius;
    }
    float area() {
        return PI * radius * radius;
    }
};

int main() {
    float poolRadius;
    cin >> poolRadius;

    Circle pool(poolRadius);
    Circle outerPool(poolRadius + 3);

    float fenceCost = outerPool.circumference() * FENCE_PRICE;
    float concreteCost = (outerPool.area() - pool.area()) * CONCRETE_PRICE;

    cout << "Fence Cost: " << fenceCost << endl;
    cout << "Concrete Cost: " << concreteCost << endl;

    return 0;
}