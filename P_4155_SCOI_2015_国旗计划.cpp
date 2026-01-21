#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=4e5+1;
int n,m;
struct warrior{
    int id,L,R;
    bool operator<(const warrior b) const{return L<b.L;}
}w[N*2];
int n2;
int go[N][20];
void solve()
{
    int nxt=1;
    for(int i=1;i<=n2;i++){
        while(nxt<=n2&&w[nxt].L<=w[i].R)
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        w[i].id=i;
        scanf("%d%d",&w[i].L,&w[i].R);
        if(w[i].R<w[i].L)
        {
            w[i].R+=m;
        }
    }
    sort(w+1,w+n+1);
}
