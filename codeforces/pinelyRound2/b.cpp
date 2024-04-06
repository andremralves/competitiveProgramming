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

void solve() {
    int n; cin>>n;

    vector<int> a(n);
    map<int, int> where;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        where[a[i]] = i;
    }

    set<int> used;
    int ans = 0;
    for(int i=1; i<=n; i++) {
        //if(used.count(i)) continue;
        //used.insert(i);
        int x = where[i];
        int j = i+1;
        while(j <= n) {
            int pos = where[j];
            if(pos > x) {
                x = pos;
                j++;
            } else {
                break;
            }
        }
        i = j-1;
        ans++;
    }
    cout<<ans-1<<"\n";

}
// 1 2 3 6 4 5
// 1 2 3 4 5 6
//
//

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
