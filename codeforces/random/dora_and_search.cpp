/**
 *    author: mralves 
 *    created: 02-06-2023 18:32:27       
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
    for(int i=0; i<n; i++) cin>>a[i];

    int l=0, r = n-1;
    int mn = 1, mx = n;
    while(l < r) {
        if(a[l] == mn) {
            mn++, l++;
        }
        if(a[l] == mx) {
            mx--, l++;
        }
        if(a[r] == mn) {
            mn++, r--;
        }
        if(a[r] == mx) {
            mx--, r--;
        }

        if(a[l] != mn and a[l] != mx and a[r] != mx and a[r] != mn) {
            cout<<l+1<<" "<<r+1<<"\n";
            return;
        }
    }
    cout<<"-1\n";
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
