#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    int ans = 0;
    int w[3], h[3];
    for (int i = 0; i < 3; i++) {cin>>h[i];}
    for (int i = 0; i < 3; i++) {cin>>w[i];}

    for (int a = 1; a < 31; a++)
    for (int b = 1; b < 31; b++)
    for (int d = 1; d < 31; d++) 
    for (int e = 1; e < 31; e++) 
    {
        int c = h[0]-a-b;
        if(c<=0) continue;
        int f = h[1]-d-e;
        if(f<=0) continue;
        int g = w[0]-a-d;
        if(g<=0) continue;
        int H = w[1]-b-e;
        if(H<=0) continue;
        int i = w[2]-c-f;
        if(i<=0) continue;
        if(g+H+i == h[2]) ans++;
    }

    cout<<ans<<"\n";
    return 0;
}
