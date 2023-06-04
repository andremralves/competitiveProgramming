/**
 *    author: mralves 
 *    created: 03-06-2023 08:58:49       
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
    ll n;
    cin>>n;
    vector<ll> out;
    int pot = 1;
    for(int i=1; i<=7; i++) {
        out.push_back(10*pot);
        pot *= 10;
    }

    if(n < 1000) {
        cout<<n<<"\n";
    } else {
        for(int i=0; i<(int)out.size()-1; i++) {
            if(n >= out[i]*100 and n < out[i+1]*100) {
                cout<<(n/out[i]*out[i])<<"\n";
                return;
            }
        }
        cout<<(n/out[6]*out[6])<<"\n";
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
