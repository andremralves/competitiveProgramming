/**
 *    author: mralves 
 *    created: 15-04-2023 08:52:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

int limit = 2000005;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

int main ()
{
    int n, q;
    cin>>n>>q;
    vector<multiset<int>> a(n+1);
    vector<set<int>> b(limit);
    for(int i=0; i<q; i++) {
        int t, x, y;
        cin>>t;
        if(t == 1) {
            cin>>x>>y;
            a[y].insert(x);
            b[x].insert(y);
        } else if(t == 2) {
            cin>>x;
            for(auto item : a[x]) {
                cout<<item<<" ";
            }
            if(a[x].size() > 0) {
                cout<<"\n";
            }
        } else {
            cin>>x;
            for(auto item : b[x]) {
                cout<<item<<" ";
            }
            if(b[x].size() > 0) {
                cout<<"\n";
            }
        }
    }
    return 0;
}
