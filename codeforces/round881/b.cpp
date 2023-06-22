/**
 *    author: mralves 
 *    created: 20-06-2023 11:35:06       
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
    int n; cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    ll ans =0;
    for(int i=0; i<n; i++) {
        int j = i;
        if(a[j] >= 0) continue;
        while(j<n and a[j] <= 0) {
            a[j] *= -1;
            j++;
        }
        if(j-i>0) {
            ans++;
        }
        i = j;
    }
    ll sum = 0;
    for(int i=0; i<n; i++) {
        sum += a[i];
    }
    cout<<sum<<" "<<ans<<"\n";
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
