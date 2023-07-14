/**
 *    author: mralves 
 *    created: 11-02-2023 09:36:39       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    string s;
    cin>>s;
    for(auto c: s) {
        if(c == '1') {
            cout<<0;
        } else {
            cout<<1;
        }
    }
    cout<<"\n";
    return 0;
}
