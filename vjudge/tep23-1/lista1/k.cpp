/**
 *    author: mralves 
 *    created: 09-04-2023 11:29:00       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    string s;
    cin>>s;
    deque<char> dq;
    for(auto c : s) {
        if(c != 'B') {
            dq.push_back(c);
        } else if(dq.size() > 0){
            dq.pop_back();
        }
    }
    for(auto c: dq) {
        cout<<c;
    }
    cout<<"\n";
}

int main ()
{
    solve();    
    return 0;
}
