#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;
const int MAXN = 1000000;

vector<long long> fact(MAXN + 1);
vector<long long> inv_fact(MAXN + 1);

long long mod_pow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= MAXN; ++i) {
        fact[i] = fact[i-1] * i % MOD;
    }
    inv_fact[MAXN] = mod_pow(fact[MAXN], MOD - 2);
    for (int i = MAXN - 1; i >= 0; --i) {
        inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
    }
}

long long comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * inv_fact[k] % MOD * inv_fact[n-k] % MOD;
}

int main() {
    precompute();

    int T;
    cin >> T;
    while (T--) {
        int n, x, t;
        cin >> n >> x >> t;

        // t 是暴露边数，对应块数 b = t + 1
        int b = t + 1;

        // 块数不能超过 n，也不能少于 1
        if (b > n || b < 1) {
            cout << 0 << endl;
            continue;
        }

        // 检查是否可能
        // 0 块数 p, 1 块数 q
        int p0 = (b + 1) / 2;  // 0 块数（以 0 开头）
        int q0 = b / 2;         // 1 块数
        int p1 = (b + 1) / 2;  // 1 块数（以 1 开头）
        int q1 = b / 2;         // 0 块数

        long long ans = 0;

        // 以 0 开头
        if (p0 <= x && q0 <= n - x) {
            ans = (ans + comb(x - 1, p0 - 1) * comb(n - x - 1, q0 - 1)) % MOD;
        }

        // 以 1 开头
        if (p1 <= n - x && q1 <= x) {
            ans = (ans + comb(n - x - 1, p1 - 1) * comb(x - 1, q1 - 1)) % MOD;
        }

        cout << ans << endl;
    }

    return 0;
}