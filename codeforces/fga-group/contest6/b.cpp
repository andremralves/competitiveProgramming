/**
 *    author: mralves 
 *    created: 08-08-2023 15:59:46       
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
    vector<int> a(4);
    for(int i=0; i<4; i++) {
        cin>>a[i];
    }

    int life = 0;
    int ans = 0;
    life += a[0];
    ans += a[0];
    if(ans > 0) {
        int x = min(a[1], a[2]);
        ans += x*2;
        a[1] -= x;
        a[2] -= x;
        int cnt = 0;
        for(int i=1; i<4; i++) {
            cnt += a[i];
        }
        if(cnt > life)
            ans += life+1;
        else
            ans += cnt;
    } else {
        if(a[1] or a[2] or a[3]) {
            ans = 1;
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
