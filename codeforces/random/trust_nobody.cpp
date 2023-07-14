/**
 *    author: mralves 
 *    created: 18-05-2023 23:35:20       
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
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int liars=0; liars<=n; liars++) {
        int cnt = 0;
        for(auto x: a) {
            if(x > liars)
                cnt++;
        }

        if(cnt == liars) {
            cout<<cnt<<"\n";
            return;
        }
    }
    cout<<"-1\n";
    
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
