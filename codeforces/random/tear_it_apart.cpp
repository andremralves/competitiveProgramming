/**
 *    author: mralves 
 *    created: 19-05-2023 02:28:45       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

const int oo = 2*1e5;

void solve() {
    string s;
    cin>>s;
    int ans = oo;
    for(int i=0; i<26; i++) {
        int mx = 0;
        for(int j=0; j<(int)s.size(); j++) {
            int cnt = 0;
            while(j<(int)s.size() and s[j] != 'a'+i) {
                mx = max(mx, ++cnt); 
                j++;
            }
        }
        int x = 0;
        while(mx > 0) {
            mx >>= 1;
            x++;
        }
        ans = min(ans, x);
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
