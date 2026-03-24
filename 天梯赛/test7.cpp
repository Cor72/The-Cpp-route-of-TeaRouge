#include<iostream>
using namespace std;


void solve()
{
    int a[3][3];
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < 3; i++) {
        sum += a[i][i];
    }

    cout<< sum << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}