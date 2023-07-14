/**
 *    author: mralves 
 *    created: 28-04-2023 21:51:12       
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
    string s;
    vector<int> ans(10, 0);
    for(int i=1; i<=n; i++) {
        s += to_string(i);
    }
    for(auto c:s) {
        ans[c-'0']++;
    }
    for(int i=0; i<10; i++) {
        cout<<ans[i]<<(i==9?"\n":" ");
    }
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
