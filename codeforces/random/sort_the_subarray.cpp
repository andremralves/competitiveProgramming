/**
 *    author: mralves 
 *    created: 01-06-2023 22:14:25       
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
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }
    int l = 0, r = 0;
    for(int i=0; i<n; i++) {
        if(a[i] != b[i]) {
            l = r = i;
            while(r < n-1 and b[r] <= b[r+1]) {
                r++;
            }
            while(l > 0 and b[l] >= b[l-1]) {
                l--;
            }
            break;
        }
    }
    r++, l++;
    cout<<l<<" "<<r<<"\n";
    
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
