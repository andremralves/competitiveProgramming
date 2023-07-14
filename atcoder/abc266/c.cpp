/**
 *    author: mralves 
 *    created: 14-12-2022 11:20:48       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int ax,ay;
    int bx,by;
    int cx,cy;
    int dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;

    if((ax < bx and ax < dx and cx < ax)
            or (bx < ax and bx < cx and dx < bx) 
            or (cx < bx and cx < dx and ax < cx)
            or (dx < cx and dx < ax and bx < dx)) {
        cout<<"No\n";
    } else if((ay > by and ay > dy)
            or (by > ay and by > cy) 
            or (cy > by and cy > dy)
            or (dy > cy and dy > ay)) {
        cout<<"No\n";
    } else if((ax < bx and ax < dx and cx < ax)
            or (bx < ax and bx < cx and dx < bx) 
            or (cx < bx and cx < dx and ax < cx)
            or (dx < cx and dx < ax and bx < dx)) {
        cout<<"No\n";
    } else {
        cout<<"Yes\n";
    }
    
    
    return 0;
}
