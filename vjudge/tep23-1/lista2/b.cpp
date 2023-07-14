/**
 *    author: mralves 
 *    created: 28-04-2023 21:51:12       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int a, b;
    while(cin>>a>>b) {
        int f = a/b;
        int res = a%b;
        cout<<"["<<f<<";";
        while(res >= 1) {
            f = b/res; 
            int tmp = res;
            res = b%res;
            b = tmp;
            if(res < 1)
                cout<<f<<"]\n";
            else
                cout<<f<<",";
        }
    }
}

int main ()
{

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
