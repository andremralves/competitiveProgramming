/**
 *    author: mralves 
 *    created: 18-09-2023 11:36:46       
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
    int n, m;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int B = 0;
    for(int i=0; i<m; i++) {
        cin>>b[i];
        B |= b[i];
    }

    int mn = 0;
    for(int i=0; i<n; i++) {
        mn ^= (a[i]|B);
    }

    int mx = 0;
    for(int i=0; i<n; i++) {
        mx ^= a[i];
    }

    if(n%2 == 0) {
        cout<<mn<<" "<<mx<<"\n";
    } else {
        int xo = 0;
        for(int i=0; i<n; i++) {
            xo ^= a[i];
        }
        cout<<xo<<" "<<mn<<"\n";
    }

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
