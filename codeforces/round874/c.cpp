/**
 *    author: mralves 
 *    created: 19-05-2023 11:36:25       
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
    for(int i=0; i<n; i++) cin>>a[i];
    sort(all(a));


    int odd_cnt = 0, even = 0;
    for(int i=0; i<n; i++) {
        if(a[i]%2 == 0) {
            even++;
        } else {
            odd_cnt++;
        }
    }

    if(odd_cnt == n || even == n) {
        cout<<"YES\n";
        return;
    }

    bool ans = true;
    bool odd = false;
    for(int i=0; i<n; i++) {
        if(a[i]%2)
            odd = true;
        else if(!odd){
            ans = false;
            break;
        }
    }
    if(ans) {
        cout<<"YES\n";
        return;
    }

    odd = false;
    ans = true;
    for(int i=0; i<n; i++) {
        if(a[i]%2)
            odd = true;
        else if(!odd){
            ans = false;
            break;
        }
    }

    if(ans) {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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
