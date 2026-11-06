#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

void solve()
{
    stack<char> st;
    string line;
    bool ok = true;

    while (getline(cin, line)) {
        if (line == "#") break;   // 结束符
        for (char c : line) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else if (c == ')' || c == ']' || c == '}') {
                if (st.empty()) { ok = false; break; }
                char t = st.top();
                if ((c == ')' && t == '(') ||
                    (c == ']' && t == '[') ||
                    (c == '}' && t == '{')) {
                    st.pop();
                } else {
                    ok = false; break;
                }
            }
        }
        if (!ok) break;
    }

    if (ok && st.empty()) cout << "matched" << endl;
    else cout << "unmatched" << endl;
    return 0;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int T;cin>>T;
    //while(T--)
    solve();
    return 0;
}