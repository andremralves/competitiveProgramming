/**
 *    author: mralves 
 *    created: 03-06-2023 08:58:49       
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
    int w, h, n;
    cin>>w>>h>>n;
    vector<ii> vp;
    for(int i=0; i<n; i++) {
        int p, q;
        cin>>p>>q;
        vp.emplace_back(p, q);
    }
    int A;
    cin>>A;
    vector<int> a(A);
    for(int i=0; i<A; i++) {
        cin>>a[i];
    }
    //a[A] = w;

    int B;
    cin>>B;
    vector<int> b(B);
    for(int i=0; i<B; i++) {
        cin>>b[i];
    }
    //a[B] = h;

    map<ii, int>mp;
    for(int i=0; i<n; i++) {
        int x = lower_bound(all(a), vp[i].first) - a.begin();
        int y = lower_bound(all(b), vp[i].second) - b.begin();
        mp[{x, y}]++;
    }
    int lo = INT_MAX, hi = 0;
    for(auto &[pi, cnt] : mp) {
        hi = max(cnt, hi);
        lo = min(cnt, lo);
    }
    if(mp.size()< (A+1)*(B+1)) lo = 0;
    cout<<lo<<" "<<hi<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
