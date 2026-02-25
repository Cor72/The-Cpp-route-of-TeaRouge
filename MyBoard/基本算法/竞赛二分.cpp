#include <bits/stdc++.h>
using namespace std;
using ll = long long;


// 在升序数组 a 中找第一个 >= target 的位置
ll find_first_ge(vector<ll>& a, ll target) {
    ll l = -1;
    ll r = a.size();

    while (l + 1 < r) {
        ll mid = (l + r) / 2;
        if (a[mid] >= target) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r; // 第一个 >= target 的下标
}

void solve()
{
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}