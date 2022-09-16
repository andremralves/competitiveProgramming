#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int solve(int n, int m, int sx, int sy, int d) {
    if(sx-d<=1 && sy-d<=1) return -1;
    if(sx+d>=n && sy+d>=m) return -1;
    if(sx-d<=1 && sx+d>=n) return -1;
    if(sy-d<=1 && sy+d>=m) return -1;
    //if(sx+d >= n && sx-d <= 1) return -1;
    //if(sy+d >= m && sy-d <= 1) return -1;
    return n+m-2;
}

int main (int argc, char *argv[])
{
    int t;    
    cin >> t;
    while (t--)
    {
        int n,m,sx,sy,d;
        cin >>n>>m>>sx>>sy>>d;
        cout << solve(n, m, sx, sy, d) << "\n";
    }
    return 0;
}
