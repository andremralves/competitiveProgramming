/**
 *    author: mralves 
 *    created: 25-07-2023 19:16:35       
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
    int n, t;
    cin>>n>>t;

    vector<int> a(n), b(n), keep(101, -1);
    for(int i=0; i<n; i++) {
        cin>>a[i];
        a[i]+=i;
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }

    int ans = -1;
    int mx = 0;
    for(int i=0; i<n; i++) {
        if(a[i] <= t and b[i] > mx) {
            mx = b[i];
            ans = i+1;
        }
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
