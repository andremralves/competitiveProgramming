/**
 *    author: mralves 
 *    created: 28-01-2023 18:17:41       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

int main ()
{
    int a, b;
    cin>>a>>b;
    if(a < b)
        swap(a, b);
    if(a/b == 2)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
