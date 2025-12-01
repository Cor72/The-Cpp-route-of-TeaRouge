#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, bagweight;// bagweight代表行李箱空间

    cin >> n >> bagweight;

    vector<int> weight(n, 0); // 存储每件物品所占空间
    vector<int> value(n, 0);  // 存储每件物品价值

    for(int i = 0; i < n; ++i) {
        cin >> weight[i];
    }
    for(int j = 0; j < n; ++j) {
        cin >> value[j];
    }
    // dp数组, dp[i][j]代表行李箱空间为j的情况下,从下标为[0, i]的物品里面任意取,能达到的最大价值
    vector<vector<int>> dp(weight.size(), vector<int>(bagweight + 1, 0));

    // 初始化, 因为需要用到dp[i - 1]的值
    // j < weight[0]已在上方被初始化为0
    // j >= weight[0]的值就初始化为value[0]
    for (int j = weight[0]; j <= bagweight; j++) {
        dp[0][j] = value[0];
    }

    for(int i = 1; i < weight.size(); i++) { // 遍历科研物品
        for(int j = 0; j <= bagweight; j++) { // 遍历行李箱容量
            if (j < weight[i]) dp[i][j] = dp[i - 1][j]; // 如果装不下这个物品,那么就继承dp[i - 1][j]的值
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
            }
        }
    }
    cout << dp[n - 1][bagweight] << endl;

    return 0;
}





#include <iostream>
#include <vector>
using namespace std;
#define max(N1,N2) N1>N2?N1:N2
int main()
{
	/*
	第一行输入背包容量V和物体的个数n
	接下来有n行，每行包含两个数字，分别为该物体的花费和价值
	*/
	vector<int> w, v;//w为花费，v为价值
	vector<vector<int>> f;//f状态矩阵
	int V, n;//V背包容量，n物体数
	while (cin >> V >> n)
	{
		w.clear();
		v.clear();
		f.clear();
		w.push_back(0);
		v.push_back(0);

		//输入原始数据
		for (int i = 1; i <= n; i++)
		{
			int cur_w, cur_v;
			cin >> cur_w >> cur_v;
			w.push_back(cur_w);
			v.push_back(cur_v);
		}

		//初始化状态矩阵
		for (int i = 0; i <= n; i++)
		{
			vector<int> buff(V + 1, 0);
			f.push_back(buff);
		}

		//动态规划过程
		for (int i = 1; i <= n; i++)
		{
			for (int j = V; j >= 0; j--)
			{
				if (j >= w[i])
				{
					f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
				}
				else
				{
					f[i][j] = f[i - 1][j];
				}
			}
		}

		//输出答案
		int ans = f[n][V];
		cout << ans << endl;
	}
	return 0;
}
————————————————
版权声明：本文为CSDN博主「Iseno_V」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/Iseno_V/article/details/100001133