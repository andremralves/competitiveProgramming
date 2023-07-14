/**
 *    author: mralves 
 *    created: 28-04-2023 21:51:12       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int a;
    while(cin>>a) {
        int i=1, j=1, cnt = 1;
        while(cnt < a) {
            j++; cnt++;
            if(cnt==a) break;
            while(j > 1 and cnt < a) {
                i++; j--; cnt++;
            }
            if(cnt == a) break;
            i++; cnt++;
            if(cnt == a) break;
            while(i>1 and cnt<a) {
                i--; j++; cnt++;
            }
        }
        cout<<"TERM "<<a<<" IS "<<i<<"/"<<j<<"\n";
    }
}

int main ()
{

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}

