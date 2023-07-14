/**
 *    author: mralves 
 *    created: 06-05-2023 09:07:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n;
    ll x;
    cin>>n;
    vector<ll> a(n);
    ll sumA = 0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        sumA+=a[i];
    }
    cin>>x;
    ll sum = 0;
    if(x%sumA == 0) {
        cout<<(x/sumA)*n+1<<"\n";
    } else {
        int div = x/sumA;
        int i = div*n;
        sum = sumA*div;
        while(sum <= x) {
            sum+=a[i%n];
            i++;
        }
        cout<<i<<"\n";
    }
    //cout<<cnt<<"\n";
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
