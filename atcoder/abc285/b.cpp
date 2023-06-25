/**
 *    author: mralves 
 *    created: 28-01-2023 18:17:41       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=1; i<n; i++) {
        int cnt = 0;
        for(int j=0; j+i<n; j++) {
            if(s[j] == s[j+i]) break;
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
