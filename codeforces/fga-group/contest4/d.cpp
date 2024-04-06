/**
 *    author: mralves 
 *    created: 28-07-2023 22:45:38       
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
    int w = 0, b = 0;
    for(int i=0; i<k; i++) {
        if(s[i] == 'B')
            b++;
        else
            w++;
    }

    int r = k, l = 0;
    int ans = w;
    while(r < n) {
        if(s[l] == 'B') b--;
        else w--;

        if(s[r] == 'B') b++;
        else w++;

        ans = min(w, ans);
        r++, l++;
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
