/**
 *    author: mralves 
 *    created: 20-05-2023 09:08:23       
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
    int n, w;
    cin>>n>>w;
    vector<string> vs(n);
    for(int i=0; i<n; i++) cin>>vs[i];

    for(int i=0; i<n; i++) {
        for(int j=0; j<w; j++) {
            for(auto d : dir8) {
                string s = "";
                int x = i, y = j;
                while(x>=0 and y >= 0 and x<n and y<w) {
                    s += vs[x][y];
                    if(s == "snuke") {
                        x -= d.first*4; y-=d.second*4;
                        for(int k=0; k<5; k++) {
                            cout<<x+1<<" "<<y+1<<"\n";
                            x += d.first; y+=d.second;
                        }
                        return;
                    }
                    x+=d.first; y+=d.second;
                }
            }
        }
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
