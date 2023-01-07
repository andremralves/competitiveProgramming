/**
 *    author: mralves 
 *    created: 07-01-2023 08:59:51       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0; i<n; i++) {
        cin>>s[i];
    }
    for(int i= n-1; i>=0; i--) {
        cout<<s[i]<<"\n";
    }
    return 0;
}
