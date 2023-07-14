/**
 *    author: mralves 
 *    created: 14-05-2023 11:34:41       
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
    int sum = 0;
    for(int i=0; i<n; i++) {
        a[i] = i+1;
        sum += i+1;
    }
    int res = sum%n;
    a[0] += res;

    for(auto x: a) {
        cout<<x<<" ";
    }
    cout<<"\n";
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
