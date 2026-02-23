#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;

const LL MOD = 998244353;

LL T, C;
LL p[10], res[10];

LL s[10] = {0b1110111, 0b0100100, 0b1011101, 0b1101101, 
        0b0101110, 0b1101011, 0b1111011, 0b0100101, 
        0b1111111, 0b1101111};

LL qmi(LL a, LL b, LL p)
{
    LL res = 1;
    while (b)
    {
        if (b & 1) res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
}

int main()
{
    scanf("%lld", &T);
    LL ni = qmi(100, MOD - 2, MOD);
    
    while (T--)
    {
        scanf("%lld", &C);
		
        for (int i = 0; i < 7; i++)
        {
            LL x;
            scanf("%lld", &x);
            p[i] = x * ni % MOD;
        }
        for (int i = 0; i < 10; i++)
        {
            res[i] = 1;
            for (int j = 0; j < 7; j++)
            {
                if (s[i] >> j & 1)
                    res[i] = res[i] * p[j] % MOD;
                else res[i] = res[i] * (1 - p[j] + MOD) % MOD;
            }
        }
        LL ans = 0;
        for (int A = 0; A <= C; A++)
        {
            LL a1, b1, c1, d1;
            a1 = A % 10, b1 = (A / 10) % 10, c1 = (A / 100) % 10, d1 = (A / 1000) % 10;
            LL p_A = res[a1] * res[b1] % MOD * res[c1] % MOD * res[d1] % MOD;
            int B = C - A;
            a1 = B % 10, b1 = (B / 10) % 10, c1 = (B / 100) % 10, d1 = (B / 1000) % 10;
            LL p_B = res[a1] * res[b1] % MOD * res[c1] % MOD * res[d1] % MOD;
            ans = (ans + p_A * p_B % MOD) % MOD;
        }
        printf("%lld\n", ans);
    }
    return 0;
}