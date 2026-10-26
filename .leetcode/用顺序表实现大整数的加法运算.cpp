#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> LA, LB;
    int n1, n2;

    cin >> n1;
    LA.resize(n1);
    for(int i = 0; i < n1; i++)
    {
        cin >> LA[i];
    }
    cin >> n2;
    LB.resize(n2);
    for(int i = 0; i < n2; i++)
    {
        cin >> LB[i];
    }

    vector<int> LC(max(n1, n2)+1,0);
    int nc = max(n1, n2);
    n1--;n2--;
    for(int i = nc;i >= 0; i--)
    {
        if(n1 >= 0)
        {
            LC[i] += LA[n1];
            n1--;
        }
        if(n2 >= 0)
        {
            LC[i] += LB[n2];
            n2--;
        }
        if(LC[i] >= 10)
        {
            LC[i] -= 10;
            LC[i - 1]++;
        }

    }
    int start = 0;
    while(start < LC.size() - 1 && LC[start] == 0) {
        start++;
    }
    int len = LC.size() - start;
    for(int i = start; i < LC.size(); i++)
    {
        cout << LC[i];
        if(i != LC.size() - 1)
        {
            cout << " ";
        }
    }

}