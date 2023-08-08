/**
 *    author: mralves 
 *    created: 07-08-2023 11:35:06       
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

    vector<int> a(n);
    int sum = 0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        sum+=a[i];
    }

    for(int i=0; i<n; i++) {
        if((bool)((sum-a[i])%2) == (bool)(a[i]%2)) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    
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
