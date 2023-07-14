/**
 *    author: mralves 
 *    created: 16-05-2023 02:41:51       
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
    int ans = 1;
    for(int i=1; i<n; i++) {
        for(int j=2; j<n; j++) {
            if(pow(i, j) > n) continue;
            ans = max(ans, (int)pow(i, j));
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
