/**
 *    author: mralves 
 *    created: 24-12-2022 18:34:10       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main ()
{
    string s;
    cin>>s;
    for(int r = s.length()-3; r >= 0; r-=2) {
        int l = r/2;
        int j = r;
        int ok = 1;
        while(l != 0) {
            if(s[l--] != s[j--]) {
                ok = 0;
                break;
            }
        }
        if(ok) {
            cout<<r+1<<"\n";
            break;
        }
    }
    return 0;
}
