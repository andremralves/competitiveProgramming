/**
 *    author: mralves 
 *    created: 23-01-2023 13:20:53       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

int main ()
{
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=1; i<s.size()-1; i++) {
        cnt++;
    }
    cout<<s[0] << cnt << s[s.size()-1]<<"\n";
    return 0;
}
