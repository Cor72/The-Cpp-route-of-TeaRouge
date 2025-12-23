#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// 计算两个数的最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 扩展欧几里得算法求最大公约数
int exgcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1; y = 0;
        return a;
    }
    int d = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

// 找到最大k
int findMaxK(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return 1;

    int g = 0;
    for (int i = 1; i < n; ++i) {
        g = gcd(g, abs(nums[i] - nums[0]));
    }
    if (g == 0) return nums[0];

    int k = 1;
    for (int i = 2; i * i <= g; ++i) {
        if (g % i == 0) {
            int x, y;
            exgcd(i, g, x, y);
            if (x == 1 || x == -1) k = max(k, i);
            if (y == 1 || y == -1) k = max(k, g / i);
        }
    }
    if (g > 1) k = max(k, g);
    return k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        cout << findMaxK(nums) << endl;
    }
    return 0;
}
