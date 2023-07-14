/**
 *    author: mralves 
 *    created: 15-04-2023 08:52:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {

}

int main ()
{
    int n;
    string s;
    cin>>n>>s;
    bool poor = false;
    bool good = false;
    for(int i=0; i<n; i++) {
        if(s[i] == 'o') {
            good = true;
        }
        if(s[i] == 'x') {
            poor = true;
        }
    }

    if(good and !poor) {
        cout<<"Yes\n";
    } else {
        cout<<"No\n";
    }
    return 0;
}
