/**
 *    author: mralves 
 *    created: 03-06-2023 11:28:59       
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
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    if(a[n-1] == 1) {
        cout<<"No\n";
    } else {
        cout<<"Yes\n";
        vector<int> ans;
        for(int i=0; i<n; i++) {
            int j = i;
            while(j<n and a[j] == a[i]) {
                ans.push_back(0);
                j++;
            }
            if(j < n)
                ans.push_back(j);
            i = j;
        }
        for(int i=0; i<(int)ans.size(); i++) {
            cout<<ans[i]<<( i == n-1 ? "\n" : " ");
        }
    }

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
