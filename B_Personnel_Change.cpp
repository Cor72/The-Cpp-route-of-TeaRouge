#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;

void solve()
{
    int N, M;
    cin >> N >> M;

    vector<int> now(M + 1, 0);
    vector<int> next(M + 1, 0);

    for (int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        now[A]++;
        next[B]++;
    }
    for (int j = 1; j <= M; ++j) {
        cout<<next[j]-now[j]<<endl;
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
