#include <iostream>
using namespace std;

int main() {
    int var = 10;
    cout << var << endl;

    int* ptr = &var;
    cout <<*ptr << endl;

    int& ref = var;
    cout <<ref << endl;

    *ptr = 20;
    cout <<var << endl;

    ref = 30;
    cout<< var << endl;

    return 0;
}
