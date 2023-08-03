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

int n;
vector<ii> pSum(vector<int> a, int mx , int mi) {
    vector<ii> b;
    int hi  = max_element(all(a))-a.begin();
    while(a[hi] < -mi) {
        a[hi] += a[hi];
        b.emplace_back(hi+1, hi+1);
    }
    for(int i=0; i<n; i++) {
        if(a[i] < 0) {
            a[i] += a[hi];
            b.emplace_back(i+1, hi+1);
        }
    }

    for(int i=1; i<n; i++) {
        b.emplace_back(i+1, i);
    }
    return b;
}

vector<ii> sSum(vector<int> a, int mx , int mi) {
    vector<ii> b;
    int lo  = min_element(all(a))-a.begin();
    while(a[lo] > -mx) {
        a[lo] += a[lo];
        b.emplace_back(lo+1, lo+1);
    }
    for(int i=0; i<n; i++) {
        if(a[i] > 0) {
            a[i] += a[lo];
            b.emplace_back(i+1, lo+1);
        }
    }

    for(int i=1; i<n; i++) {
        b.emplace_back(n-i, n-i+1);
    }
    return b;
}

void solve() {
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int mx = *max_element(all(a));
    int mi = *min_element(all(a));

    vector<ii> b;

    if(mx == mi) {
        cout<<0<<"\n";
        return;
    }

    
    if(mx <= 0) {
        for(int i=1; i<n; i++) {
            b.emplace_back(n-i, n-i+1);
        }
    } else if(mi >= 0) {
        for(int i=1; i<n; i++) {
            b.emplace_back(i+1, i);
        }
    } else {
        vector<ii> try1, try2;
        try1 = pSum(a, mx, mi);
        try2 = sSum(a, mx, mi);
        b = (try1.size() <= try2.size() ? try1 : try2);
    }

    cout<<b.size()<<"\n";
    for(int i=0; i<(int)b.size(); i++) {
        cout<<b[i].first<<" "<<b[i].second<<"\n";
    }

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
