#include <bits/stdc++.h>
using namespace std;

class tree {
public:
    int ages;
    tree(int n) {
        ages = n;
    }
    void grow(int years) {
        ages += years;
    }
    void age() {
        cout << ages << endl;
    }
};

int main() {
    tree t(18);
    t.age();
    t.grow(4);
    t.age();
    return 0;
}