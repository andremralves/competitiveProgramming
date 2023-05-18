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
    ll n, k;
    cin>>n>>k;
    ll ans;
    if(n%2 == 0) {
        ans = k%n;
    } else {
        ans = 1;
        ans += ((k-1)+(k-1)/(n/2))%n;
    }
    cout<<(ans == 0 ? n : ans)<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}


