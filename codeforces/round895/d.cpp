/**
 *    author: mralves 
 *    created: 07-09-2023 11:32:36       
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

int count_div(int m) {
    int mcnt = 1;
    for(int i=2; i*i<=m; i++) {
        int cnt = 1;
        while(m%i == 2) {
            m/=i;
            cnt++;
        }
        mcnt *= cnt;
    }
    return mcnt;
}

void solve() {
    ll n, x, y;
    cin>>n>>x>>y;

    ll mcnt = 1, xcnt = 1, ycnt = 1;
    mcnt = n/lcm(x, y);
    xcnt = n/x;
    ycnt = n/y;

    ll pos = (n+n-(xcnt-mcnt)+1)*(xcnt-mcnt)/2;
    ll neg = (1+(ycnt-mcnt))*(ycnt-mcnt)/2;
    if(mcnt >= xcnt)
        pos = 0;
    if(mcnt >= ycnt)
        neg = 0;
    cout<<pos-neg<<"\n";
    
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
