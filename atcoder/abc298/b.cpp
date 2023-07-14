/**
 *    author: mralves 
 *    created: 15-04-2023 08:52:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

int n;
ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

int main ()
{
    cin>>n;
    vector<vector<int>> 
        a(n, vector<int>(n, 0)), 
        b(n, vector<int>(n, 0)),
        c(n, vector<int>(n, 0));

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>b[i][j];
        }
    }

    for(int i=0; i<4; i++) {
        c = a;
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                a[j][k] = c[n-1-k][j];
            }
            //cout<<"\n";
        }
        bool ok = true;
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                if(a[j][k] == 1 and a[j][k] != b[j][k]) {
                    ok = false;
                }
            }
        }
        if(ok) {
            cout<<"Yes\n";
            return 0;
        }
    }

    cout<<"No\n";

    return 0;
}
