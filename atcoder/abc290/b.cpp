/**
 *    author: mralves 
 *    created: 19-02-2023 09:04:18       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n, k;
    string s;
    cin>>n>>k;
    cin>>s;
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if(cnt >= k) {
            cout<<"x";
        } else {
            cout<<s[i];
            if(s[i] == 'o') {
                cnt++;
            }
        }
    }
    cout<<"\n";
    return 0;
}
