/**
 *    author: mralves 
 *    created: 20-05-2023 09:08:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, m;
    cin>>n>>m;
    vector<string> vs(n);
    for(int i=0; i<n; i++) cin>>vs[i];

    sort(all(vs));
    do {
        bool ok = true;
        for(auto it = vs.begin(); it != vs.end()-1; it++) {
            string s1 = *it;
            string s2 = *(it+1);
            int cnt = 0;
            for(int i=0; i<m; i++) {
                if(s1[i] != s2[i]) cnt++;
            }
            if(cnt != 1) {
                ok = false;
            }
        }
        if(ok) {
            cout<<"Yes\n";
            return;
        }
    } while(next_permutation(all(vs)));
    cout<<"No\n";
    return;

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
