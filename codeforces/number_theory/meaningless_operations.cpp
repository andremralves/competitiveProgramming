/**
 *    author: mralves 
 *    created: 30-08-2023 01:43:08       
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

void brute(int a) {
    int ans = -1;
    int b = 0;
    for(int i=1; i<a; i++) {
        if(gcd(a^i, a&i) > ans) {
            b = i;
            ans = gcd(a^i, a&i);
        }
    }
    cout<<"ans "<<a<<" "<<b<<": "<<ans<<"\n";
}

void solve() {
    int n;
    cin>>n;

    int b = 0;
    for(int i=0; i<26; i++) {
        int mask = 1<<i;
        if(mask <= n and (mask & n) == 0) {
            b += mask;
        }
    }
    if(b == 0) {
        cout<<gcd(n, n-b)<<"\n";
    } else {
        cout<<gcd(n^b, n&b)<<"\n";
    }
    //brute(n);
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
