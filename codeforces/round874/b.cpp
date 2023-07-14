/**
 *    author: mralves 
 *    created: 19-05-2023 11:36:25       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, k;
    cin>>n>>k;
    vector<pair<int, int>> a(n), b(n);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        a[i] = {x, i};
    }
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        b[i] = {x, i};
    }

    sort(all(a));
    sort(all(b));

    map<int, int> mp;
    for(int i=0; i<n; i++) {
        mp.insert({a[i].second, b[i].first});
    }

    for(auto x: mp) {
        cout<<x.second<<" ";
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
