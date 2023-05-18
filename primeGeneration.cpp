#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const ll MAX = 1e6;

// Sieve of Eratosthenes
// O(log(n))
vector<ll> sieve(ll MAX) {
    vector<bool> prime(MAX + 1, true);
    vector<ll> plist;
    for(ll i=2; i<=MAX; i++) {
        if(prime[i]) {
            plist.push_back(i);
            for(ll j=i*i; j<=MAX; j+=i) {
                prime[j] = false;
            }
        }
    }
    return plist;
}

int main() {

    vector<ll> plist = sieve(MAX);

    for(auto x: plist) {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}
