#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int n;cin>>n;
    if (n < 0 || n > 100) {
        cout << "输入的字母错误" << endl;
    } else {
        int grade = n / 10;
        switch (grade) {
            case 10:
            case 9:
            case 8:
                cout << "A" << endl;
                break;
            case 7:
                cout << "B" << endl;
                break;
            case 6:
                cout << "C" << endl;
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                cout << "D" << endl;
                break;
            default:
                cout << "输入的字母错误" << endl;
                break;
        }
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}