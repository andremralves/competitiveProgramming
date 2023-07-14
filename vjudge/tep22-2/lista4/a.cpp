/**
 *    author: mralves 
 *    created: 06-12-2022 13:04:59       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;


int main (int argc, char *argv[])
{
    int r, g, b;
    cin>>r>>g>>b;
    r *= 100;
    g *= 10;
    cout<<((r+g+b)%4 == 0? "YES":"NO")<<"\n";
    return 0;
}
