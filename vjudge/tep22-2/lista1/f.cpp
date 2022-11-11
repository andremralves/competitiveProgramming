#include <bits/stdc++.h>

using namespace std;


int main (int argc, char *argv[])
{
    int j,r;
    while (cin>>j>>r)
    {
        //cout<<j<<" "<<r<<endl;
        int points[j+1];
        for (int i = 1; i <= j; i++) {
            points[i] = 0;
        }
        int p = 1;
        for(int i=0; i<j*r;i++) {
            int val;
            cin>>val;
            //cout<<val<<" ";
            points[p]+=val;
            if(p==j) {
                p=1;
            } else{
                p++;
            }
        }
        //cout<<endl;
        int max = -1;
        int ans = -1;
        for (int i = 1; i <= j; i++) {
            //cout<<points[i]<<" ";
            if(points[i]>=max) {
                max = points[i];
                ans = i;
            }
        }
        //cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
