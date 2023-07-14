/**
 *    author: mralves 
 *    created: 14-01-2023 10:38:18       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

int main ()
{
    int a, b;
    cin>>a>>b;
    int s = a+b;
    if(s%3 == 0 || a%3 == 0 || b%3 == 0)
        cout<<"Possible\n";
    else
        cout<<"Impossible\n";
    return 0;
}
