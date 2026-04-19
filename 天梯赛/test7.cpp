#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
using ll = long long;
using i128 = __int128;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
const int MODX = 1e9 + 7;
const int modx = 998'244'353;

string to_string(i128 n){
	if (!n) return "0";
	bool neg = 0;
	string s;
	if (n < 0) n = -n, neg = 1;
	while (n){
		s += char(n % 10 + '0');
		n /= 10;
	}
	if (neg) s += '-';
	reverse(s.begin(), s.end());
	return s;
}

void sol(){
	int n, k, cnt = 0;
	cin >> n;
    vector<string> arr(n);
    for (auto& s : arr) cin >> s;
    cin >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    for (auto& str : arr){
        size_t pos = 0;
        while ((pos = s.find(str, pos)) != string::npos){
            s.replace(pos, str.size(), "^_^");
            cnt++;
            pos += 3;
        }
    }
    if (cnt >= k)
        cout << cnt << endl << "He Xie Ni Quan Jia!" << endl;
    else{
        size_t pos = 0;
        while ((pos = s.find("^_^", pos)) != string::npos){
            s.replace(pos, 3, "<censored>");
            pos += 10;
        }
        cout << s << endl;
    }
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t = 1;
//	cin >> t;
	while (t--) sol();
}
