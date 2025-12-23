#include<iostream>
#include<string>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
const int N=1e6+5;
int heap[N],len=0;
void push(int x)
{
    heap[++len]=x;
    int i=len;
    while(i>1&&heap[i]<heap[i/2])
    {
        swap(heap[i],heap[i/2]);
        i=i/2;
    }
}
void pop()
{
    heap[1]=heap[len--];
    int i=1;
    while(2*)
}
void solve()
{


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
