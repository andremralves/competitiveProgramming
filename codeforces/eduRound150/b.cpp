/**
 *    author: mralves 
 *    created: 12-06-2023 11:34:04       
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
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    queue<ll> que;
    vector<bool> ans;
    bool inv = false;
    for(int i=0; i<n; i++) {
        if(que.empty()) {
            que.push(a[i]);
            ans.push_back(1);
        } else {
            if(!inv) {
                if(a[i] >= que.back()) {
                    que.push(a[i]);
                    ans.push_back(1);
                } else if(a[i] <= que.front()){
                    que.push(a[i]);
                    ans.push_back(1);
                    inv = true;
                } else {
                    ans.push_back(0);
                }
            } else {
                if(a[i] >= que.back() and a[i] <= que.front()) {
                    que.push(a[i]);
                    ans.push_back(1);
                } else {
                    ans.push_back(0);
                }
            }
        }
    }
    for(auto x: ans) {
        cout<<x;
    }
    cout<<"\n";
}

// 3 2 1

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
