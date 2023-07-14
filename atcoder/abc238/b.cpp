/**
 *    author: mralves 
 *    created: 19-05-2023 23:19:49       
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
    vector<int> a(n), b(360, 0);
    b[0] = 1;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(i)
            a[i] += a[i-1];
        b[a[i]%360] = 1;
    }
    
    int ans = 0;
    for(int i=0; i<360; i++) {
        int cnt = 0;
        if(b[i] == 1) {
            cnt++;
            i++;
            while(b[i%360] != 1) {
                cnt++;
                i++;
            }
            i--;
            ans = max(ans, cnt);
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
