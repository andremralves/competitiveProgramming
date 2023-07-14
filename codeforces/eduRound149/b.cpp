/**
 *    author: mralves 
 *    created: 25-05-2023 11:36:26       
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
    string s;
    cin>>n>>s;
    int prev = s[0];
    int cnt = 1;
    int mx = 1;
    for(int i=1; i<n; i++) {
        if(s[i] == prev) {
            cnt++;
        } else {
            mx = max(cnt, mx);
            cnt = 1;
        }
        prev = s[i];
    }
    mx = max(cnt, mx);

    cout<<mx+1<<"\n";
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
