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

void solve() {
    ll n;
    cin>>n;

    vector<ll> ans;
    for(ll i=1; i*i<=n; i++) {
        if(n%i == 0) {
            ans.push_back(n* (i-1) / 2 + i);
            if(i*i != n) {
                ans.push_back(n * (n/i-1) / 2 + n/i);
            }
        }
    }

    sort(all(ans));

    for(auto x: ans) {
        cout<<x<<" ";
    }
    cout<<"\n";
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

