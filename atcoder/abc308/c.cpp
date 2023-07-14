/**
 *    author: mralves 
 *    created: 01-07-2023 09:01:05       
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
    map<double, vector<int>> mp; 
    cin>>n;
    for(int i=0; i<n; i++) {
        double a, b;
        cin>>a>>b;
        double x = (double)a/(a+b);
        mp[x].push_back(i+1);
    }

    vector<vector<int>> ans;
    for(auto x : mp) {
        ans.push_back(x.second);
    }
    reverse(all(ans));
    for(auto x: ans) {
        for(auto y: x) {
            cout<<y<<" ";
        }
    }
    cout<<"\n";

    //cin>>n;
    //vector<ii> vii(n);
    //map<ii, int> mp;
    //for(int i=0; i<n; i++) {
    //    int a, b;
    //    cin>>a>>b;
    //    vii[i] = {a, b};
    //    mp[{a, b}] = i+1;
    //}

    //sort(all(vii), [](const ii &a, const ii &b) {
    //        return (double)a.first/(a.first+a.second) > (double)b.first/(b.first+b.second);
    //        });

    //for(int i=0; i<n; i++) {
    //    //cout<<vii[i].first<<" "<<vii[i].second<<"\n";
    //    cout<<mp[vii[i]]<<" ";
    //}
    //cout<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout<<std::setprecision(10);
    int t = 1;
    while (t--) solve();
    return 0;
}
