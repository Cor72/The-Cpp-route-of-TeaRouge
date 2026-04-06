#include<iostream>
#include<string>
#include<vector>
using namespace std;
using ll=long long;
using pii=pair<int,int>;

struct  node
{
    int data;
    node *next;
};

void solve()
{

    int n,m;cin>>n>>m;
    node *head,*p,*now,*prev;
    head=new node;head->data=1;head->next=NULL;
    now=head;
    for(int i=2;i<=n;i++)
    {
        p=new node;p->data=i;p->next=NULL;
        now->next=p;
        now=p;
    }
    now->next=head;
    //上面是链表的标准流程
    now=head,prev=head;
    while((n--)>1)
    {
        for(int i=1;i<m;i++)
        {
            prev=now;
            now=now->next;
        }
        cout<<now->data<<" ";
        prev->next=now->next;
        delete now;
        now=prev->next;
    }
    cout<<now->data<<" ";
    delete now;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
