/**
 *    author: mralves 
 *    created: 15-05-2023 02:38:21       
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
    int ctr = 0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(i > 0)
            ctr += abs(a[i]-a[i-1]);
    }

    n = unique(a.begin(), a.end()) - a.begin();
    int ans = n;
    for(int i=1; i<n-1; i++) {
        if(a[i-1] < a[i] and a[i] < a[i+1] 
                || a[i-1] > a[i] and a[i] > a[i+1])
            ans--;
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
