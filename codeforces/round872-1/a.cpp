/**
 *    author: mralves 
 *    created: 22-05-2023 22:05:04       
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
    int n, m;
    cin>>n>>m;
    vector<int> a;
    int cl = 0, cr = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x>0) {
            a.push_back(x);
        } else if(x == -1) {
            cl++;
        } else {
            cr++;
        }
    }
    sort(all(a));
    a.erase(unique(all(a)), a.end());
    
    int ans = 0; 
    ans = max(ans, int(a.size()) + cl);
    ans = max(ans, int(a.size()) + cr);
    ans = min(ans, m);

    for(int i=0; i<a.size(); i++) {
        int l = min(a[i]-1, i+cl);
        int r = min(m-a[i], int(a.size())-i-1+cr);
        ans = max(ans, l + 1 + r);
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
