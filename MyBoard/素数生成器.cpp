#include<bits/stdc++.h>
using namespace std;

vector<int> prime = {2, 3, 5, 7};
void sieve(int upper){
    prime.reserve(4800);
    for (int i = prime.back() + 2; i < upper; i += 2){
        int flag = 1, max = sqrt(i) + 1;
        for (int j = 0; j < prime.size() && prime[j] < max; j++)
            if (i % prime[j] == 0){
                flag = 0;
                break;
            }
        if (flag) prime.push_back(i);
    }
}

int main(){
	sieve(46341);
	cout << prime.size() << endl;
	for (int i : prime) cout << i << ", ";
}
