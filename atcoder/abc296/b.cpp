/**
 *    author: mralves 
 *    created: 01-04-2023 09:00:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
    char c;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            cin>>c;
            if(c == '*') {
                cout<<(char)(j+1+'a'-1)<<8-i<<"\n";
            }
        }
    }
}

int main ()
{
    solve();    
    return 0;
}
