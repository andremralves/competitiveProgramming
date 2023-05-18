/**
 *    author: mralves 
 *    created: 18-05-2023 19:24:15       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n;
    cin>>n;
    int ans = 0;
    map<int, int> fact;
    int mx = 0;
    for(int i=2; i*i<=n; i++) {
        while(n%i == 0) {
            n /= i;
            fact[i]++;
        }
        mx = max(fact[i], mx);
    }
    if(n > 1) {
        fact[n]++;
    }
    mx = max(fact[n], mx);

    while(mx--) {
        int x = 0;
        for(auto &f: fact) {
            if(f.second >= 1) {
                if(x == 0) x = 1;
                x *= f.first;
                f.second--;
            }
        }
        ans += x;
    }

    cout<<ans<<"\n";

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
