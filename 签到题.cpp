#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // 统计频次
    map<int, int> freq;
    for (int x : a) freq[x]++;
    
    // 从大到小遍历，记录"严格大于当前值"中是否有奇数频次
    // 用map记录每个值能否获胜
    map<int, bool> canWin;
    bool hasOddInGreater = false;  // 更大的值中是否有奇数频次
    
    // 需要按值从大到小处理
    // map默认从小到大，所以用反向迭代器
    for (auto it = freq.rbegin(); it != freq.rend(); ++it) {
        int val = it->first;
        int cnt = it->second;
        
        if (!hasOddInGreater) {
            // 所有更大的值都是偶数次，可以内部消化
            // 当前值能获胜当且仅当频次为奇数（最后剩一个）
            canWin[val] = (cnt % 2 == 1);
        } else {
            // 有更大的值无法消化，当前值会被淘汰
            canWin[val] = false;
        }
        
        // 更新状态：当前值如果为奇数，则对更小的值来说，"更大值中有奇数"
        if (cnt % 2 == 1) {
            hasOddInGreater = true;
        }
    }
    
    for (int x : a) {
        cout << (canWin[x] ? '1' : '0');
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
