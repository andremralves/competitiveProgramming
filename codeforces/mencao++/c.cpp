/**
 *    author: mralves 
 *    created: 17-02-2023 16:10:47       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n, p;
    cin>>n;
    map<int,int> stk;
    map<int, int> qr;
    for(int i=0; i<n; i++) {
        int x, y;
        cin>>x>>y;
        stk[x] = y;
    }
    cin>>p;
    for(int i=0; i<p; i++) {
        int x, y;
        cin>>x>>y;
        qr[x] += y;
    }

    for(auto item: qr) {
        if(item.second > stk[item.first]) {
            cout<<"Nao\n";
            return 0;
        }
    }
    cout<<"Sim\n";
    return 0;
}
