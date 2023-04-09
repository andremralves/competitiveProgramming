/**
 *    author: mralves 
 *    created: 09-04-2023 09:01:48       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

int main ()
{
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=1; i<n; i++) {
        if(a[i] - a[i-1] <= m) {
            cout<<a[i]<<"\n";
            return 0;
        }
    }
    cout<<"-1\n";
    return 0;
}
