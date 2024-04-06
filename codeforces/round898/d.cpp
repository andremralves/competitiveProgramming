/**
 *    author: mralves 
 *    created: 22-09-2023 21:34:48       
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
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    int ans = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'W') continue;
        bool has = false;
        int j = i;
        while(j< n and j-i+1 <= k) {
            if(s[j] == 'B') has = true;
            j++;
        }
        if(has) ans++;
        i = j-1;
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
