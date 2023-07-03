/**
 *    author: mralves 
 *    created: 02-07-2023 13:14:55       
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
    int n;
    cin>>n;
    vector<int> a(n);
    map<int, int> cnt;
    int sum = 0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        cnt[a[i]]++;
        sum+=a[i];
    }

    sort(all(a));
    ll ans = 0;
    int x;
    if(n%2) {
        x = a[n/2];
    } else {
        double m = (double)sum/n;
        if(abs(m-a[n/2]) <= abs(m-a[n/2+1])) {
            x = a[n/2];
        } else {
            x = a[n/2+1];
        }
    }
    for(int i=0; i<n; i++) {
        ans += abs(x-a[i]) ;
    }

    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
