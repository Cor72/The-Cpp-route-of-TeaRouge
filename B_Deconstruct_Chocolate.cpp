#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 优化输入输出效率
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, L, R;
    if (!(cin >> N >> L >> R)) return 0;
    
    string S;
    cin >> S;

    // 1. 分组：存储每个字符出现的所有位置（下标从0开始存储，计算时逻辑一致即可）
    // S的下标是 0 到 N-1。题目要求 1-based，但距离 j-i 在 0-based 下也是一样的。
    vector<vector<int>> positions(26);
    for (int i = 0; i < N; ++i) {
        positions[S[i] - 'a'].push_back(i);
    }

    long long total_pairs = 0;

    // 2. 对每个字符的位置列表进行滑动窗口计算
    for (int c = 0; c < 26; ++c) {
        const vector<int>& P = positions[c];
        if (P.size() < 2) continue; // 少于2个无法组成对

        int left = 0;  // 对应满足 distance <= R 的左边界
        int right = 0; // 对应满足 distance >= L 的右边界（实际上是第一个不满足 < L 的位置的前一个？）
        
        // 重新定义指针含义以简化逻辑：
        // 对于当前的 j (P[j])，我们要找 i 的范围 [l, r] 使得:
        // P[j] - P[i] <= R  => P[i] >= P[j] - R
        // P[j] - P[i] >= L  => P[i] <= P[j] - L
        
        // l 指向第一个满足 P[i] >= P[j] - R 的位置
        // r 指向最后一个满足 P[i] <= P[j] - L 的位置
        // 有效数量 = max(0, r - l + 1)

        int l = 0;
        int r = 0; // r 将指向第一个 > P[j] - L 的位置，那么有效区间是 [l, r-1]

        for (int j = 0; j < P.size(); ++j) {
            int current_pos = P[j];
            
            // 移动 l，直到 P[l] >= current_pos - R
            while (l < j && current_pos - P[l] > R) {
                l++;
            }
            
            // 移动 r，直到 P[r] > current_pos - L (此时 r 是第一个不满足 >=L 条件的，或者说 r 是上界的下一个)
            // 我们希望找到最大的 idx 使得 P[idx] <= current_pos - L
            // 所以让 r 停在第一个 P[r] > current_pos - L 的位置
            // 初始化 r 至少为 l，因为如果连 L 都不满足，区间可能为空
            if (r < l) r = l;
            
            while (r < j && P[r] <= current_pos - L) {
                r++;
            }
            // 此时，满足条件的 i 的范围是 [l, r-1]
            // 因为 P[r] > current_pos - L (不满足 >=L)，而 P[r-1] <= current_pos - L (满足)
            // 同时 P[l] >= current_pos - R (满足 <=R)
            
            // 检查是否真的有满足条件的元素
            // 需要 P[r-1] >= current_pos - R 且 P[r-1] <= current_pos - L
            // 由于 l 已经保证了 P[l] >= current_pos - R，且 l <= r-1 (如果区间非空)
            // 只要 r > l，就有 r - l 个元素
            
            if (r > l) {
                total_pairs += (long long)(r - l);
            }
        }
    }

    cout << total_pairs << endl;

    return 0;
}