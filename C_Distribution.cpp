#include<bits/stdc++.h>
using namespace std;

const int maxn = 100000 + 5;
int pre[maxn];
int n, level[maxn] ;
void dfs(int u)
{
    for(int i=1; i<=n; i++)
    {
        if(pre[i] == u)
        {
            level[i] = level[pre[i]] + 1;
            dfs(i);
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%d", &pre[i]);
        
    for(int i=1; i<=n; i++)
    {
        if(pre[i] == -1)
        {
            dfs(i);
        }
    }
    int max = level[0];
    for(int i=1; i<=n; i++)
    {
        if(max <= level[i])
            max = level[i];
    }
    printf("%d\n",max+1);
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(level[i] == max)
        {
            if(count == 1)
                printf(" ");
            
            count = 1;
            printf("%d",i);
        }
    }
}
