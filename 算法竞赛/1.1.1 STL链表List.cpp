#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

void solve()
{

    int n,m;
    cin>>n>>m;
    list<int> node;
    for(int i=1;i<=n;i++)
    {
        node.push_back(i);
    }
    list<int>::iterator it=node.begin();
    while(node.size()>1)
    {
        for(int i=1;i<m;i++)
        {
            it++;
            if(it==node.end()) it=node.begin();
        }
    cout<<*it<<" ";
    list<int>::iterator next=it;
    next++;
    if(next==node.end()) next=node.begin();
    node.erase(it--);
    it=next;
    }
    cout<<*it;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
