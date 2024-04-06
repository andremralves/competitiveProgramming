/**
 *    author: mralves 
 *    created: 06-08-2023 18:46:29       
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
    ll n, k;
    cin>>n>>k;

    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    ll hi = *max_element(all(a))+k;
    ll lo = 0;
    ll ans;
    while(lo<=hi) {

        ll md = (hi+lo)/2;

        bool ok = false;
        //cout<<"md:"<<md<<"\n";
        for(int i=0; i<n; i++) {
            ll cnt = 0;
            ll sum = 0;
            for(int j=i; j<n; j++) {
                if(a[j] >= md-cnt) break;

                if(j == n-1) {
                    sum = k+1;
                    break;
                }
                sum += md-a[j]-cnt;
                cnt++;
            }
            //cout<<sum<<"\n";
            if(sum <= k) ok = true;
        }
        if(ok) {
            ans = md;
            lo = md+1;
        } else {
            hi = md-1;
        }

    }
    cout<<ans<<"\n";
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
