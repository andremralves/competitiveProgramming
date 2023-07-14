/**
 *    author: mralves 
 *    created: 22-04-2023 09:03:47       
**/
#include <bits/stdc++.h>

using namespace std;
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
using ll = int64_t;
ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

int main ()
{
    int n, t;
    cin>>n>>t;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n;i++) {
        cin>>a[i];
    }
    for(int i=0; i<n;i++) {
        cin>>b[i];
    }

    vector<int> ans;
    for(int i=0; i<n; i++) {
        if(a[i] == t) {
            ans.push_back(b[i]);
        }
    }

    if(ans.size() == 0) {
        for(int i=0; i<n; i++) {
            if(a[i] == a[0]) {
                ans.push_back(b[i]);
            }
        }
    }

    sort(all(ans));
    reverse(all(ans));
    for(int i=0; i<n; i++) {
        if(b[i] == ans[0]) {
            cout<<i+1<<"\n";
        }
    }

    return 0;
}
