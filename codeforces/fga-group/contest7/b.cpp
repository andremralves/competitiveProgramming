/**
 *    author: mralves 
 *    created: 10-08-2023 17:17:06       
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

bool check(int a, int b, int c) {
    int x = b-a;
    if(b == a+x and c == b+x) return true;
    return false;
}

void solve() {
    int a, b, c;
    cin>>a>>b>>c;

    int xa = b-(c-b);
    int xb = c-(c-a)/2;
    int xc = b+b-a;
    bool ok = false;
    if(xa >= a and xa%a == 0) {
        if(check(xa, b, c)) ok = true;
    } else if(xb >= b and xb%b == 0){
        if(check(a, xb, c)) ok = true;
    } else if(xc >= c and xc%c == 0) {
        if(check(a, b, xc)) ok = true;
    } 
    cout<<(ok ? "Yes":"No")<<"\n";
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
