/**
 *    author: mralves 
 *    created: 29-07-2023 11:34:26       
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
    ll n;
    cin>>n;

    vector<ll> a;
    if(n < 1e9) {
        for(ll i=1; i*i<=n; i++) {
            if(n%i == 0) {
                a.push_back(i);
                a.push_back(n/i);
            }
        }
    } else {
        for(ll i=1; i*i*i*i*i<=n; i++) {
            if(n%i == 0) {
                a.push_back(i);
                a.push_back(n/i);
            }
        }
    }
    sort(all(a));

    int ans = 1;
    for(int i=0; i<(int)a.size(); i++) {
        int j = i+1;
        int cnt = 1;
        while(j<(int)a.size() and a[j-1]+1 == a[j]) {
            cnt++;
            j++;
        }
        ans = max(cnt, ans);
        i = j;
    }
    cout<<ans<<"\n";
}
// 1000000000000000000

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}

