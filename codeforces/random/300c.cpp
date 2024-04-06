/**
 *    author: mralves 
 *    created: 29-08-2023 01:54:51       
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

int MOD = 1e9+7;

long long binpow(long long a, long long b) {
    a %= MOD;
    long long res = 1;
    while(b > 0) {
        if(b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

bool check(int x, int a, int b) {
    while(x) {
        if(x%10 != a and x%10 != b)
            return false;
        x /= 10;
    }
    return true;
}

vector<ll> factorial(1e6+5, 0);
vector<ll> ifactorial(1e6+5, 0);
void pre_fact() {
    factorial[0] = 1;
    int N = (int)factorial.size();
    for(int i=1; i<N; i++) {
        factorial[i] = factorial[i-1]*i%MOD;
        ifactorial[i] = ifactorial[i-1]*i%MOD;
    }
    ifactorial[N-1] = binpow(factorial[N-1], MOD-2LL);
    for(int i=N-2; i>=0; i--) {
    ifactorial[i] = (i+1) * ifactorial[i+1] % MOD;
    }
}

void solve() {
    int a, b, n;
    cin>>a>>b>>n;
    
    pre_fact();

    int cur = a*n;
    int ans = 0;
    for(int i=0; i<=n; i++) {
        if(check(cur, a, b)) {
            if(i == 0) {
                ans++;
            } else {
                ans += factorial[n]*ifactorial[i]%MOD*ifactorial[n-i]%MOD;
                ans %= MOD;
            }
        }
        cur-=a;
        cur+=b;
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
