#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
    const int M = 3, N = 4;
    int a[M][N] = { {1, 4, 2, 3}, {2, 6, 5, 8}, {6, 7, 9, 10} }, i, j, k;
    for (i = 0; i < M; i++)
    {
        k = 0;
        for (j = 1; j < N; j++)
            if (a[i][j] > a[i][k]) k = j;
        for (j = 0; j < M; j++)
            if (a[i][k] > a[j][k]) break;
        if (j >= M)
            cout << "an dian is:" << a[i][k] << ", row:" << i << ", col:" << k << endl;
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