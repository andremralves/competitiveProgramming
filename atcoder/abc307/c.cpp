/**
 *    author: mralves 
 *    created: 24-06-2023 09:06:53       
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
    int ha, wa;
    cin>>ha>>wa;
    vector<string> sa;
    for(int i=0; i<ha; i++) {
        cin>>sa[i];
    }
    int hb, wb;
    cin>>hb>>wb;
    vector<string> sb;
    for(int i=0; i<ha; i++) {
        cin>>sb[i];
    }
    int hx, wx;
    cin>>hx>>wx;
    vector<string> sx;
    int black = 0;
    for(int i=0; i<hx; i++) {
        cin>>sx[i];
        black += count(all(sx[i]), '#');
    }

    for(int i=0; i<hx; i++) {
        for(int j=0; j<wx; j++) {
            vector<string> xcopy = sx;
            int x = ha/2;
            int y = wa/2;
            for(auto [a, b] : dir8) {
            }

        }
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
