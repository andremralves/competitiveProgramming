/**
 *    author: mralves 
 *    created: 09-04-2023 11:14:34       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

int main ()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if((abs(a-b) > d or abs(b-c) > d) and abs(a-c) > d) {
        cout<<"No\n";
    } else {
        cout<<"Yes\n";
    }
    return 0;
}
