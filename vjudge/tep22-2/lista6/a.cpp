/**
 *    author: mralves 
 *    created: 24-12-2022 18:34:10       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main ()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);

    cout<<a[0]+a[1]<<"\n";
    return 0;
}
