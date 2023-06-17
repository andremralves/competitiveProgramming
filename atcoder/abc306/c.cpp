/**
 *    author: mralves 
 *    created: 17-06-2023 08:52:30       
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
    map<int, vector<int>> mp;
    for(int i=0; i<n*3; i++) {
        int x;
        cin>>x;
        mp[x].push_back(i);
    }

    map<int, int> ans;
    for(auto [x, y] : mp) {
        ans[y[ceil(y.size(), 2)-1]] = x;
    }

    for(auto [x, y] : ans) {
        cout<<y<<" ";
    }
    cout<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
