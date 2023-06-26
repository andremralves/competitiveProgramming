/**
 *    author: mralves 
 *    created: 26-06-2023 00:42:43       
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
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<m; i++) {
        cin>>b[i];
    }

    sort(all(a));
    sort(all(b));


    int i=0, j=0;
    int ans =0;
    while(i<n and j<m) {
        if(abs(a[i]-b[j]) <=k) {
            i++,j++;
            ans++;
        } else if(a[i] > b[j]){
            j++;
        } else {
            i++;
        }
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
