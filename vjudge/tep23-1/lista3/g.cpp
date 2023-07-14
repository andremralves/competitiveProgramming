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
    string s;
    cin>>s;
    string ans = "";
    bool removed = false;
    for(int i=0; i<s.size(); i++) {
        if(!removed and s[i] == '0') {
            removed = true;
        } else {
            ans+=s[i];
        }
    }
    if(!removed) {
        ans.pop_back();
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
