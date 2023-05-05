/**
 *    author: mralves 
 *    created: 29-04-2023 08:54:58       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

const int MAX = 1000000;

void solve() {
    ll n;
    cin>>n;

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
    ll ans = 0;
    int sz = p.size();
    vector<ll> pp;
    for(int i=0; i<sz; i++) {
        pp.push_back((ll)p[i]*p[i]);
    }
    for(int i=0; i<p.size(); i++) {
        ll a = p[i];
        if(a*a*a*a > n) break;
    for(int j=i+1; j<p.size(); j++) {
        ll b = p[j];
        if(a*a*b*b*b > n) break;
        auto itr = upper_bound(pp.begin()+j+1, pp.end(), n/a/a/b);
        ans += itr - (pp.begin()+j+1);
    //for(int k=j+1; k<p.size(); k++) {
    //    ll c = p[k];
    //    if(n/a/a/b/c/c < 1) break;
    //    ans++;
    //}
    }
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
