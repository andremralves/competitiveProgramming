/**
 *    author: mralves 
 *    created: 01-07-2023 09:01:05       
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
    vector<int> a(8);
    bool ok = true;
    for(int i=0; i<8; i++) {
        cin>>a[i];
        if(i > 0 and a[i] < a[i-1]) {
            ok = false; 
        } 
        if(a[i] < 100 or a[i] > 675) {
            ok = false;
        }

        if(a[i] % 25 != 0) {
            ok = false;
        }
    }

    cout<<(ok ? "Yes\n":"No\n");
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
