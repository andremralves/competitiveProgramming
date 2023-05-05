#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000;
using ll = long long;

int main() {
    // Sieve of Eratosthenes
    vector<bool> prime(MAX + 1, true);
    vector<int> p;
    for(int i=2; i<=MAX; i++) {
        if(prime[i]) {
            p.push_back(i);
            for(int j=i*2; j<=MAX; j+=i) {
                prime[j] = false;
            }
        }
    }

    for(auto x: p) {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}
