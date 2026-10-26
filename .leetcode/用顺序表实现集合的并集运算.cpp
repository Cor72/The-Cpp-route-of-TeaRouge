#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> LA, LB,res;
    int n1, n2;

    cin >> n1;
    LA.resize(n1);
    for(int i = 0; i < n1; i++)
    {
        cin >> LA[i];
        res.push_back(LA[i]);
    }
    cin >> n2;
    LB.resize(n2);
    for(int i = 0; i < n2; i++)
    {
        cin >> LB[i];
        if(find(res.begin(),res.end(),LB[i])==res.end())
        {
            res.push_back(LB[i]);
        }
    }

    int n=res.size();
    for(auto i:res)
    {
        n--;
        cout << i;
        if(n>0) cout << " ";
    }

}