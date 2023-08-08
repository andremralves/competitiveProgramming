/**
 *    author: mralves 
 *    created: 07-08-2023 11:35:06       
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

const int inf = 1e9+10;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    vector<int> c(n);
    for(int i=0; i<n; i++) {
        c[i] = a[i]-b[i];
    }

    int mx = *max_element(all(c));
    int ans = 0;
    for(int i=0; i<n; i++) {
        if(c[i] == mx) {
            ans++;
        }
    }

    cout<<ans<<"\n";
    for(int i=0; i<n; i++) {
        if(c[i] == mx) {
            cout<<i+1<<" ";
        }
    }
    cout<<"\n";
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
