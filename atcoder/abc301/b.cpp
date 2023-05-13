/**
 *    author: mralves 
 *    created: 13-05-2023 09:04:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> ans;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n-1; i++) {
        ans.push_back(a[i]);
        int sz = ans.size();
        int last = ans[sz-1];
        if(last - a[i+1] > 1) {
            int x = last-1;
            while(x > a[i+1]) {
                ans.push_back(x);
                x--;
            }
        } else if(a[i+1] - last > 1) {
            int x = last+1;
            while(x < a[i+1]) {
                ans.push_back(x);
                x++;
            }
        }
    }
    ans.push_back(a[n-1]);
    for(auto x : ans) {
        cout<<x<<" ";
    }
    cout<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
