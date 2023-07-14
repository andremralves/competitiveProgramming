/**
 *    author: mralves 
 *    created: 24-05-2023 14:25:01       
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
    int n, q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    vector<int> p(n-1);
    for(int i=1; i<n-1; i++) {
        int down = a[i-1]>=a[i] and a[i]>=a[i+1];
        p[i] = down + p[i-1];
    }

    while(q--) {
        int l, r;
        cin>>l>>r;
        --l, --r;
        if(l == r) {
            cout<<"1\n";
        } else {
            cout<<(r-l+1) - p[r-1] + p[l]<<"\n";
        }
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
