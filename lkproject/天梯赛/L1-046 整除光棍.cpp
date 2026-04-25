#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int res = 1, cnt = 1;
    while(res < num) {
        res = res * 10 + 1;
        cnt ++ ;
    }
    while(true){
        cout << res / num;
        res %= num;
        if(res == 0) break;
        res = res * 10 + 1;
        cnt ++ ;
    }
    cout << ' ' << cnt;
    return 0;
}