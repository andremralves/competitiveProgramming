/**
 *    author: mralves 
 *    created: 10-02-2023 16:10:56       
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
    set<int> st;
    vector<int> a(10, 0);
    for(int i=0; i<s.size(); i++) {
        if(s[i] != '/') {
            a[s[i]-'0']++;
        }
    }
    ll ans = 1;
    for(int i=0; i<=9; i++) {
        int perm = 1;
        if(a[i] > 0) {
            for(int j=1; j<=a[i]; j++) {
                perm *= j; 
            }
        }
        ans *=perm;
    }
    cout<<720/ans<<"\n";
    return 0;
}
