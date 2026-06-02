#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
using vii=vector<int>;
const int N=1e9+7;const int MOD=998244353;

class Circle{
private:
    float radius;
    int * p_index;
    public:
    Circle(float r=1.0,int index=0);
    Circle(Circle& c);
    ~Circle();
    float area();

};
Circle::Circle(float r,int index){
    radius=r;
    p_index=new int(index);
    *p_index=index;
    cout<<"构造函数被调用"<<endl;
}
Circle::Circle(Circle& c)
{
    radius=c.radius;
    p_index=new int(*c.p_index);
    *p_index=*c.p_index;
    cout<<"拷贝构造函数被调用"<<endl;
}
Circle::~Circle(){
    cout<<"析构函数被调用"<<p_index<<endl;
    delete p_index;
}
float Circle::area(){
    return 3.14*radius*radius;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Circle c1(5.0,1);
    Circle c2(c1);
}