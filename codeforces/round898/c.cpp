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
    vector<string> grid(10);
    for(int i=0; i<10; i++) {
        cin>>grid[i];
    }

    int ans = 0;
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(grid[i][j] == 'X') {
                if(i == 0 or i == 9 or j == 0 or j == 9) {
                    ans++;
                } else if(i == 1 or i == 8 or j == 1 or j == 8) {
                    ans+=2;
                } else if(i == 2 or i == 7 or j == 2 or j == 7) {
                    ans+=3;
                } else if(i == 3 or i == 6 or j == 3 or j == 6) {
                    ans+=4;
                } else {
                    ans+=5;
                }
            }
        }
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
