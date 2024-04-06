/**
 *    author: mralves 
 *    created: 26-09-2023 11:33:14       
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
    vector<int> a;
    int cnt = 1;
    for(int i=0; i<n; i++) {
        a.push_back(cnt+=2);
    }

    for(auto x: a) {
        cout<<x<<" ";
    }
    cout<<"\n";

    //bool ok = true;
    //for(int i=0; i<n-2; i++) {
    //    if((a[i+2]*3)%(a[i]+a[i+1]) == 0) {
    //        ok = false;
    //    }
    //}
    //cout<<ok<<"\n";
}

// 1 3 5 7 9
// 4 15
// 8 21
// 12 

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
