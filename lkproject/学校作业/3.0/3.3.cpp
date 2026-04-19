#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<vector<ll>>;
const int N=4e5+1;const int MOD=998244353;



int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (argc != 3){
        cout << "usage: adder value1 value2" << endl;
        exit(1);
    }
    auto add = [](char* x, char* y){
        return atoi(x) + atoi(y);
    };
    cout << argv[1] << " + " << argv[2] << " = " << add(argv[1], argv[2]) << endl;
}
