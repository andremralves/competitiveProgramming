/**
 *    author: mralves 
 *    created: 07-05-2023 00:22:07       
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
    vector<int> a(n);
    int cnt = 0;
    int ans = 0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] == 0) {
            cnt++;
        } else {
            ans = max(cnt, ans);
            cnt = 0;
        }
    }
    ans = max(cnt, ans);
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
