/**
 *    author: mralves 
 *    created: 16-05-2023 23:22:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

const ll MAX = 1e6;

vector<bool> prime(MAX + 1, true);
vector<ll> ps;
void sieve() {
    // Sieve of Eratosthenes
    for(ll i=2; i<=MAX; i++) {
        if(prime[i]) {
            ps.push_back(i);
            for(ll j=i*i; j<=MAX; j+=i) {
                prime[j] = false;
            }
        }
    }
}

void solve() {
    int n, m;
    cin>>n>>m;
    if(n > 1 and m >= n) {
        cout<<"NO\n";
        return;
    }

    if(n > 1 and prime[n]) {
        cout<<"YES\n";
        return;
    } else {
        for(auto p : ps) {
            if(p == 1) continue;
            if(p > n or p > m)
                break;
            if(n%p == 0) {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve();
    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}


