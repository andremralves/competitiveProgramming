/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;


int main ()
{
    ll x,a,b;
    cin>>x>>a>>b;
    if(b<=a) cout<<"delicious\n";
    else if(b-a>x) cout<<"dangerous\n";
    else cout<<"safe\n";
    return 0;
}
