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
    int k, d, p, l, m;
    cin>>k>>d>>p>>l>>m;
    int n;
    cin>>n;
    vector<int> pros(n+1);
    for(int i=1; i<=n; i++) cin>>pros[i];

    int E;
    cin>>E;
    vector<char> evt(n+1);
    for(int i=0; i<E; i++) {
        int x;
        char y;
        cin>>x>>y;
        evt[x] = y;
    }

    for(int i=1; i<=n; i++) {
        p += pros[i];

        if(p > l) {
            cout<<-i<<"\n";
            return 0;
        }
        if(p <= 0) {
            cout<<i<<"\n";
            return 0;
        }

        k = min(k, m);
        k = max(0, k);
        p-=k;

        if(evt[i] == 'B') {
            k += k;  
        } else if(evt[i] == 'V') {
            k = k - d*3;
        } else {
            k -= d;
        }
    }
    cout<<"0\n";
    return 0;
}
