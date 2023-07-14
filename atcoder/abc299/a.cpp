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

void solve() {
    string s;
    int n;
    cin>>n;
    cin>>s; 
    int p = 0;
    bool ok = false;
    for(auto c : s) {
        if(c == '|') {
            p++;
        } else if(c == '*' and p == 1) {
            ok = true;
        }
    }
    if(ok) {
        cout<<"in\n";
    } else {
        cout<<"out\n";
    }
}

int main ()
{
    solve();    
    return 0;
}
