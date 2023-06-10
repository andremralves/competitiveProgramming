/**
 *    author: mralves 
 *    created: 10-06-2023 08:44:28       
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
    int h, w;
    cin>>h>>w;
    vector<vector<char>> grid(h, vector<char>(w));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            cin>>grid[i][j];
        }
    }
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            if(grid[i][j] == '#') continue;
            int cnt = 0;
            for(auto [x, y] : dir4) {
                if(i+x >= h or j+y >= w or i+x < 0 or j+y < 0) continue;
                if(grid[i+x][j+y] == '#') cnt++;
            }
            if(cnt >= 2) {
                cout<<i+1<<" "<<j+1<<"\n";
                return;
            }
        }
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
