/**
 *    author: mralves 
 *    created: 05-08-2023 16:17:39       
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
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        sum+=a[i];
    }
    if(n==1) {
        cout<<"NO\n";
        return;
    }
    int ones = count(all(a), 1);
    cout<<(sum>=ones*2+n-ones ? "YES":"NO")<<"\n";

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
