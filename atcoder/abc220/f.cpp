/**
 *    author: mralves 
 *    created: 06-05-2023 09:07:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

const int N = 100000;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> st(25, vector<int>(N));
    vector<int> p(n+1, -1);
    for(int i=0; i<n-1; i++) {
        int u, v;
        cin>>u>>v;
        p[v] = u;
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

