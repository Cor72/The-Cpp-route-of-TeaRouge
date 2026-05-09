#include<iostream>
using namespace std;
const int N = 1e6 + 10;

int n;
int q[N];

void quick_sort(int q[], int a, int b) {
    if (a >= b) return;
    int x = a, i = a - 1, j = b + 1;
    while (i < j) {
        do i++; while (q[i] < q[x]);
        do j--; while (q[j] > q[x]);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, a, i);
    quick_sort(q, i+1, b);
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> q[i];
    quick_sort(q, 0, n - 1);
    for (int k = 0; k < n; k++) cout << q[k] << " ";
    return 0;
}