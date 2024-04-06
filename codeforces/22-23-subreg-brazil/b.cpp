/**
 *    author: mralves 
 *    created: 29-08-2023 23:04:34       
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

const long long MOD = 1e9+7;

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

void solve() {
    int L[3], R[3];
    cin>>L[0]>>R[0];
    cin>>L[1]>>R[1];
    cin>>L[2]>>R[2];

    int odd = 0, even = 0;
    for(int i=1; i<=10; i++) {
        for(int j=1; j<=10; j++) {
            for(int k=1; k<=10; k++) {
                if((i+k+j)%2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
        }
    }
    cout<<"even "<<even<<"\n";
    cout<<"odd "<<odd<<"\n";
    for(int i=1; i<=1000; i++) {
        cout<<"i:"<<i<<" ";
        cout<<(i)*binpow(1000LL, MOD-2)%MOD<<"\n";
    }

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
