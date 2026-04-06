#include <iostream>
using namespace std;

int main() {
    int arr[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    bool found = false;
    for (int i = 0; i < 3 && !found; i++) {
        for (int j = 0; j < 4 && !found; j++) {
            int val = arr[i][j];
            bool isRowMax = true;
            for (int k = 0; k < 4; k++) {
                if (arr[i][k] > val) {
                    isRowMax = false;
                    break;
                }
            }
            bool isColMin = true;
            for (int k = 0; k < 3; k++) {
                if (arr[k][j] < val) {
                    isColMin = false;
                    break;
                }
            }
            if (isRowMax && isColMin) {
                cout<<i + 1<< j + 1<< val << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout <<"NULL"<< endl;
    }

    return 0;
}
