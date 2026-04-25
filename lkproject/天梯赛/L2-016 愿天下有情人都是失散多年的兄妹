#include<iostream>
#include<set>
using namespace std;
const int MAX=100000;
struct family{        //定义存储结构体
    int f=-1,m=-1;
    int sex=-1;       //初始化性别为-1
}fa[MAX];
int N,K,uns;
set<int> s;
 
//深度搜索
void check(int a,int deep){
    if(deep>5)return;         //在5代以内
    uns++;                    //记录人数
    s.insert(a);              //将亲人存入set
    if(fa[a].f!=-1) check(fa[a].f,deep+1);
    if(fa[a].m!=-1) check(fa[a].m,deep+1);
}
int main(){
    cin>>N;
    int id,x,y;
    char ch;
    for(int i=0;i<N;i++){
        cin>>id>>ch>>x>>y;
        if(ch=='M'){fa[id].sex=1;}  //男性设置1
        else fa[id].sex=0;          //女性设置0
        if(x!=-1) fa[x].sex=1;
        if(y!=-1) fa[y].sex=0;
        fa[id].f=x;
        fa[id].m=y;
    }
    cin>>K;
    for(int i=0;i<K;i++){
        cin>>x>>y;
        uns=0;              //重置数据   
        s.clear();          //重置数据 
        check(x,1);
        check(y,1);
        if(fa[x].sex==fa[y].sex) cout<<"Never Mind"<<endl;  //如果人数和set大小相同
        else if(uns!=s.size()) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}