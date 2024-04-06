/**
 *    author: mralves 
 *    created: 23-09-2023 09:08:14       
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
    int n, x;
    cin>>n>>x;

    vector<int> a(n-1);
    int sum = 0;
    for(int i=0; i<n-1; i++) {
        cin>>a[i];
        sum += a[i];
    }

    bool ok = false;
    int ans = 0;
    for(int i=0; i<=100; i++) {
        a.push_back(i);
        sum+=i;
        int mi = *min_element(all(a));
        int mx = *max_element(all(a));
        if(sum - mx - mi >= x) {
            ok = true;
            ans = i;
            break;
        }
        sum-=i;
        a.pop_back();
    }
    if(ok) {
        cout<<ans<<"\n";
    } else {
        cout<<"-1\n";
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
