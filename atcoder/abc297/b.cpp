/**
 *    author: mralves 
 *    created: 09-04-2023 09:01:48       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    string s;
    cin>>s;
    vector<int> a(26, 0);
    bool ok = true;
    int pos = -1;
    for(int i=0; i<s.size(); i++) {
        a[s[i]-'A']++;
        if(s[i] == 'K' and a['R'-'A'] != 1) {
            ok = false; 
        } else if(s[i] == 'B') {
            if(pos == -1) {
                pos = i;
            } else if(pos%2 == i%2) {
                ok = false; 
            }
        }
    }
    cout<<(ok ? "Yes\n" : "No\n");
}

int main ()
{
    solve();    
    return 0;
}
