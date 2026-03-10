#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;

void solve()
{
    long long N;
    cin >> N;
    int max_len = 0;
    int start = 0;

    for (int i = 2; i <= sqrt(N); ++i)
    {
        long long temp = N;
        int j = i;
        int current_len = 0;
 
        while (temp % j == 0) {
            temp /= j;
            current_len++;
            j++;
        }
 
        if (current_len > max_len) {
            max_len = current_len;
            start = i;
        }
    }
    if (max_len == 0) {
        max_len = 1;
        start = N;
    }
 
    cout << max_len << endl;
    for (int i = 0; i < max_len; ++i) {
        if (i > 0) cout << "*";
        cout << start + i;
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
