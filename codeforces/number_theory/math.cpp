/**
 *    author: mralves 
 *    created: 16-05-2023 23:22:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

const int MAX = 1e6;

void solve() {
    ll n;
    cin>>n;

    // Sieve of Eratosthenes
    vector<bool> prime(MAX + 1, true);
    vector<ll> p;
    for(ll i=2; i<=MAX; i++) {
        if(prime[i]) {
            p.push_back(i);
            for(ll j=i*i; j<=MAX; j+=i) {
                prime[j] = false;
            }
        }
    }
    if(n == 1) {
        cout<<"1 0\n";
        return;
    }

    vector<ll> factors(n+1, 0);
    int minint = 1;
    for(auto pi : p) {
        if(n == 1) break;
        if(n%pi == 0)
            minint *= pi;
        while(n%pi == 0) {
            n /= pi;
            factors[pi]++;
        }
    }

    ll mx = 0;
    ll diff = false;
    ll first = 0;
    for(int i=1; i<(int)factors.size(); i++) {
        if(diff == false and factors[i] > 0 and first == 0)
            first = factors[i];
        if(diff == false and factors[i] > 0 and factors[i] != first)
            diff = true;
        mx = max(factors[i], mx);
    }

    ll b = 0;
    while(1 << b < mx) b++;

    ll ops = b;
    if(diff == true or 1 << b > mx)
        ops++;

    cout<<minint<<" "<<ops<<"\n";
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


