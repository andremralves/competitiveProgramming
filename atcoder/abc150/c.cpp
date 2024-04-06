/**
 *    author: mralves 
 *    created: 03-08-2023 13:50:38       
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
    vector<int> p(n), q(n), a(n);
    for(int i=0; i<n; i++) cin>>p[i];
    for(int i=0; i<n; i++) cin>>q[i];
    a = p;
    sort(all(a));
    int cnt = 1;
    int x, y;
    do {
        if(a == p) {
            x = cnt;
        }
        if(a == q) {
            y = cnt;
        }
        cnt++;
    } while(next_permutation(all(a)));
    cout<<abs(x-y)<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
