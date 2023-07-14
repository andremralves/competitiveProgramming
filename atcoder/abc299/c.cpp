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

int main ()
{
    int n;
    string s;
    cin>>n>>s;
    bool ok = false;
    int ans = 0;

    for(int i=0; i<s.size(); i++) {
        if(s[i] == '-') {
            ok = true;
            continue; 
        }

        int j = i;
        while(j < n and s[j] == 'o') {
            j++;
        }
        ans = max(ans, j-i);
        i=j-1;
    }

    if(ok and ans > 0) {
        cout<<ans<<"\n";
    } else {
        cout<<"-1\n";
    }

    return 0;
}
