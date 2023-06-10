/**
 *    author: mralves 
 *    created: 06-06-2023 11:35:40       
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
    string s[2];
    int t, q;
    cin>>s[0]>>s[1];
    cin>>t>>q;
    set<int> diff;
    for(int i=0; i<(int)s[0].size(); i++) {
        if(s[0][i] != s[1][i])
            diff.insert(i);
    }
    set<int> blocked;
    map<int, int> todel;
    for(int i=0; i<q; i++) {
        int x;
        cin>>x;
        if(todel.count(i)) {
            blocked.erase(todel[i]);
        }
        if(x == 1) {
            int p; cin>>p;
            p--;
            blocked.insert(p);
            todel[i+t] = p;
        } else if(x == 2) {
            int p[4];
            for(int j=0; j<4; j++) {
                cin>>p[j];
                p[j]--;
            }
            swap(s[p[0]][p[1]], s[p[2]][p[3]]);
            if(s[0][p[1]] != s[1][p[1]]) {
                diff.insert(p[1]);
            } else {
                diff.erase(p[1]);
            }

            if(s[0][p[3]] != s[1][p[3]]) {
                diff.insert(p[3]);
            } else {
                diff.erase(p[3]);
            }
           
        } else {
            bool ok = true;
            if(diff.size() > blocked.size()) {
                ok = false;
            }
            for(auto item : diff) {
                if(!ok or !blocked.count(item)) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
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
