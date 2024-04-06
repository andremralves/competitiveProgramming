/**
 *    author: mralves 
 *    created: 30-08-2023 11:39:08       
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

int choose(vector<array<int, 2>> &l, vector<array<int, 2>> &c, int i, int j) {
    if(l[i][1] < l[i][0] and c[j][1] < c[j][0]) {
        l[i][0]--;
        c[j][0]--;
        l[i][1]++;
        c[j][1]++;
        return 1;
    }
    return 0; 
}

void solve() {
    int n, m;
    cin>>n>>m;

    vector<string> mat;
    for(int i=0; i<n; i++) {
        string s; cin>>s;
        mat.push_back(s);
    }

    vector<array<int, 2>> l(n), c(m);
    bool ok = true;
    for(int i=0; i<n; i++) {
        int cnt = m-count(all(mat[i]), '.');
        l[i][0] = cnt;
        if(cnt%2) {
            ok = false;
        }
    }
    for(int i=0; i<m; i++) {
        int col = 0;
        for(int j=0; j<n; j++) {
            if(mat[j][i] != '.') col++;
        }
        c[i][0] = col;
        if(col%2) {
            ok = false;
        }
    }
    if(!ok) {
        cout<<"-1\n";
        return;
    }

    vector<vector<char>> ans(n, vector<char>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            char ch = mat[i][j];
            if(ch == 'L') {
                int color = choose(l, c, i, j);
                ans[i][j] = (color == 1 ? 'B': 'W'); 
            } else if(ch == 'U') {
                int color = choose(l, c, i, j);
                ans[i][j] = (color == 1 ? 'B': 'W'); 
            } else if(ch == 'R') {
                int color = (ans[i][j-1] == 'B' ? 1 : 0);
                if(color == 0) {
                    l[i][0]--;
                    c[j][0]--;
                    l[i][1]++;
                    c[j][1]++;
                    ans[i][j] = 'B'; 
                } else {
                    ans[i][j] = 'W'; 
                }
            } else if(ch == 'D') {
                int color = (ans[i-1][j] == 'B' ? 1 : 0);
                if(color == 0) {
                    l[i][0]--;
                    c[j][0]--;
                    l[i][1]++;
                    c[j][1]++;
                    ans[i][j] = 'B'; 
                } else {
                    ans[i][j] = 'W'; 
                }
            } else {
                ans[i][j] = '.';
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<ans[i][j];
        }
        cout<<"\n";
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
