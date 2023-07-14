/**
 *    author: mralves 
 *    created: 02-06-2023 19:06:02       
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
    vector<int> p(n), q(n), posp(n), posq(n);
    for(int i=0; i<n; i++) {
        cin>>p[i];
        p[i]--;
        posp[p[i]] = i;
    }
    for(int i=0; i<n; i++) {
        cin>>q[i];
        q[i]--;
        posq[q[i]] = i;
    }

    int left = min(posp[0], posq[0]);
    int right = max(posp[0], posq[0]);
    int ans = (left+1)*(left)/2;
    ans += (n-right)*(n-right-1)/2;
    ans += (right-left) * (right-left-1)/2;
    cout<<ans<<"\n";
    for(int mex=2; mex<=n; mex++) {
        left = right;     
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
