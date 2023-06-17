/**
 *    author: mralves 
 *    created: 17-06-2023 03:44:20       
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

map<ll, ll> primeFact(ll N) {
    map<ll, ll> fact;
    for(ll i=2; i*i<=N; i++) {
        while(N % i == 0) {
            N /= i;
            fact[i]++;
        }
    }
    if(N > 1)
        fact[N]++;
    return fact;
}

void solve() {
    ll N; 
    cin>>N;
    auto facts = primeFact(N);

    vector<int> v;
    vector<int> look(101);
    int cnt = 1;
    for(int i=1; i<=100; i+=cnt) {
        v.push_back(i);
        look[i] = cnt;
        cnt++;
    }

    int ans = 0;
    for(auto f : facts) {
        ans += look[*(upper_bound(all(v), f.second) - 1)];
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
