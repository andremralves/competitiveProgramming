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
    int n;
    cin>>n;
    vector<string> ss(n);
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        ss[i] = s;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) continue;
            string x = ss[i] + ss[j];
            int l = 0, r = x.size()-1;
            bool ok = true;
            while(l < r) {
                if(x[l] != x[r]) {
                    ok = false;
                }
                r--, l++;
            }
            if(ok) {
                cout<<"Yes\n";
                return;
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
    //cin>>t;
    while (t--) solve();
    return 0;
}
