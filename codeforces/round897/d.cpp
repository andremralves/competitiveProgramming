/**
 *    author: mralves 
 *    created: 11-09-2023 11:33:10       
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
    for(int i=0; i<n; i++) {
        cin>>a[i];
        a[i]--;
    }

    bool ans = true;
    if(k == 1) {
        for(int i=0; i<n; i++) {
            if(a[i] != i)
                ans = false;
        }
    } else {
        vector<int> used(n);
        for(int i=0; i<n; i++) {
            vector<int> b;
            b.push_back(i);
            while(!used[b.back()]) {
                used[b.back()] = true;
                b.push_back(a[b.back()]);
            }
            for(int j=(int)b.size()-2; j>=0; j--) {
                if(b[j] == b.back() and (int)b.size()-j-1 != k) {
                    ans = false;
                }
            }
        }
    }
    cout<<(ans?"YES":"NO")<<"\n";

}

// 2 3 5 2 3
// 1 2 3

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
