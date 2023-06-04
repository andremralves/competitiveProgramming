/**
 *    author: mralves 
 *    created: 04-06-2023 16:10:11       
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
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        bool ok = true;
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                if(i == j or i == k or k ==j) continue;
                if(a[i] == abs(a[j]-a[k])) {
                    ok = false; 
                }
            }
        }
        if(ok) {
            cout<<a[i]<<"\n";
            return;
        }
    }
    cout<<*max_element(all(a))<<"\n";
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
