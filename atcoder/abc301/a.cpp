/**
 *    author: mralves 
 *    created: 13-05-2023 09:04:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n;
    string s;
    cin>>n>>s;
    char ans = 'A';
    int aCnt = 0, tCnt = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'A') {
            aCnt++;
        } else {
            tCnt++;
        }
        if(aCnt > tCnt) {
            ans = 'A';
        }
        if(tCnt > aCnt) {
            ans = 'T';
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
