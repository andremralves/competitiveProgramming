/**
 *    author: mralves 
 *    created: 31-07-2023 16:24:56       
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
    int n, d;
    cin>>n>>d;
    string s;
    cin>>s;
    bool ok = false;
    for(int i=0; i<n; i++) {
        if(!ok and d > s[i]-'0') {
            cout<<d;
            ok = true;
        }
        cout<<s[i];
    }
    if(!ok) {
        cout<<d;
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
