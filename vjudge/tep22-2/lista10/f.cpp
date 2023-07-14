/**
 *    author: mralves 
 *    created: 04-02-2023 13:16:45       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n, d;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    ll ans = 0;
    int r = 2, l = 0;
    while(r < n) {
        if(a[r]-a[l] > d) {
            l++;
        } else {
            ans += (ll)(r-l) * (r-l-1) / 2;
            r++;
        }
    }

    cout<<ans<<"\n";
    return 0;
}
