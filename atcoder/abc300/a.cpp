/**
 *    author: mralves 
 *    created: 29-04-2023 08:54:58       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, a, b;
    cin>>n>>a>>b;
    vector<int> arr(n);
    int sum = a+b;
    int ans = 0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i] == sum) {
            ans = i+1;
        }
    }
    cout<<ans<<"\n" ;
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
