/**
 *    author: mralves 
 *    created: 30-09-2023 08:59:40       
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

int n = 4;
vector<pair<int, int>> readGrid() {
    vector<pair<int, int>> a;
    int x=0, y=0;
    bool first = false;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            char ch; cin>>ch;
            if(ch == '#') {
                if (!first) {
                    first = true;
                    x = i, y = j;
                }
                a.emplace_back(i-x, j-y);
            }
        }
    }
    return a;
}

bool paintGrid(vector<string> &grid, vector<ii> a) {
    for(auto [x, y] : a) {
        if(x < 0 or x >= n or y < 0 or y >= n or 
                grid[x][y] == '#') return false;
        grid[x][y] = '#';
    }
    return true;
}

void solve() {
    vector<pair<int, int>> a, b, c;
    a = readGrid();
    b = readGrid();
    c = readGrid();

    vector<ii> coords;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            coords.emplace_back(i, j);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            coords.emplace_back(j, -i);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            coords.emplace_back(-i, -j);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            coords.emplace_back(-j, i);
        }
    }

    for(auto [x1, y1]: coords) {
    for(auto [x2, y2]: coords) {
    for(auto [x3, y3]: coords) {
        vector<string> grid(n);
        for(int i=0; i<n; i++) grid[i] = "....";
        vector<ii> aa, bb, cc;
        for(auto [x, y]: a) aa.emplace_back(x+x1, y+y1);
        for(auto [x, y]: b) bb.emplace_back(x+x2, y+y2);
        for(auto [x, y]: c) cc.emplace_back(x+x3, y+y3);
        if(paintGrid(grid, aa) and paintGrid(grid, bb) and paintGrid(grid, cc)) {
            cout<<"Yes\n";
            return;
        }
    }
    }
    }
    cout<<"No\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
