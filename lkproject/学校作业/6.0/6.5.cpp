#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;


int main() {
    int i,j,sum=0;
    for (i = 1; i<= 1000; i++) {
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    cout<<j<<" ";
                }
            }
            cout<<"\n";
        }
    }

    return 0;
}