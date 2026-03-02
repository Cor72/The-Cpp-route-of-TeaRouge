#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        set<int> pw;
        for (int start = 0; start < n; start++) {
            vector<int> temp = a;
            int remaining = 0;
            for (int x : temp) remaining += x;
            
            int current = start;
            int winner = -1;
            
            while (remaining > 0) {
                if (temp[current] > 0) {
                    temp[current]--;
                    remaining--;
                    if (remaining == 0) {
                        winner = current;
                        break;
                    }
                }
                current = (current + 1) % n;
            }
            
            pw.insert(winner);
        }
        
        cout << pw.size() << endl;
    }
    
    return 0;
}