/**
 *    author: mralves 
 *    created: 02-05-2023 00:53:22       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n;
    while(cin>>n) {
        if(n < 0) break;
        string ans = "";
        while(true) {
            ans += to_string(n%3);
            n /= 3;
            if(n == 0) break;
        }
        reverse(all(ans));
        cout<<ans<<"\n";
    }
}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
