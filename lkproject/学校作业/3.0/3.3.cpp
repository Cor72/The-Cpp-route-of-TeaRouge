#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void swap(int a, int b, int *psum, int *pmul)
{
    *psum = a + b;
    *pmul = a * b;
}

void main()
{
    int x = 5, y = 9, sum, mul;
    swap(x, y, &sum, &mul);
    cout << sum << "," << mul << endl;
}