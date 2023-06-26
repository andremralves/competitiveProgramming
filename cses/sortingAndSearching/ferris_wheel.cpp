/**
 *    author: mralves 
 *    created: 26-06-2023 11:02:27       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    sort(all(a));
    
    int l=0, r=n-1;
    int ans = 0;
    while(l<=r) {
        if(a[l] + a[r] > x) {
            r--;
            ans++;
        } else {
            ans++;
            l++, r--;
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
