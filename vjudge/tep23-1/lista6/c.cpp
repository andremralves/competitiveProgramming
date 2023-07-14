/**
 *    author: mralves 
 *    created: 04-06-2023 03:38:46       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

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

void solve() {
    ll x;    
    cin>>x;
    vector<ll> p = sieve(1e6);
    cout<<*lower_bound(all(p), x)<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
