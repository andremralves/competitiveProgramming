/**
 *    author: mralves 
 *    created: 24-08-2023 11:32:03       
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
    int n, m;
    cin>>n>>m;

    vector<string> ss;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        ss.push_back(s);
    }

    string find = "vika";
    int k = 0;
    for(int i=0; i<m; i++) {
        if(k == 4) break;
        for(int j=0; j<n; j++) {
            if(ss[j][i] == find[k]) {
                k++;
                break;
            }
        }
    }
    cout<<(k == 4?"YES\n":"NO\n");


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
