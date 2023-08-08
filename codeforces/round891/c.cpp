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

void solve() {
    int n;
    cin>>n;
    int m = n*(n-1)/2;

    map<int, int> mp;
    for(int i=0; i<m; i++) {
        int x; cin>>x;
        mp[x]++;
    }

    vector<int> a;
    for(auto it=mp.rbegin(); it != mp.rend(); it++) {
        auto [x, y] = *it;
        y++;
        //cout<<x<<" "<<y<<" "<<"\n";
        for(int j=0; j<y; j++) {
            y-=a.size();
            a.push_back(x);
        }
    }

    reverse(all(a));
    for(auto x: a) {
        cout<<x<<" ";
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
