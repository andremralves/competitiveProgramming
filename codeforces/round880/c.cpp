/**
 *    author: mralves 
 *    created: 18-06-2023 11:34:58       
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

vector<ii> f = {{1, 9},{10, 99},{100, 999},{1000, 9999},{10000, 99999},{100000, 999999}};

void solve() {
    int A, B, C, k;
    cin>>A>>B>>C>>k;
     
    ll b = k/f[A].first;
    cout<<b<<"\n";


}

// a * b = k
// a = k / b;
// b = k / a;

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
