/**
 *    author: mralves 
 *    created: 30-08-2023 11:39:08       
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
    int n, k;
    cin>>n>>k;
    
    vector<int> a(n);
    vector<int> cnt(n+1);
    for(int i=0; i<n; i++) {
        cin>>a[i];
        cnt[a[i]]++;
    }

    int mex;
    for(int i=0; i<=n; i++) {
        if(cnt[i] == 0) {
            mex = i;
            break;
        }
    }
    a.push_back(mex);

    int val = k%(n+1);

    for(int i=0; i<n; i++) {
        cout<<a[(n+1-val+i)%(n+1)]<<" ";
    }
    cout<<"\n";
    

}

// 1 2 3 4 5
// 0 1 2 3 4 - 1
// 5 0 1 2 3 - 2
// 4 5 0 1 2 - 3
// 3 4 5 0 1 - 4
// 2 3 4 5 0 - 5
// 1 2 3 4 5

// 0 2
// 1 0
// 2 1
// 0 2

// 0 1 3 2
// 2 0 1 3
// 3 2 0 1
// 1 3 2
// 0 1 3

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
