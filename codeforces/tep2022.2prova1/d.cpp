/**
 *    author: mralves 
 *    created: 25-11-2022 16:17:17       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    int x, y, z;
    int n,m;
    string s;
    cin>>x>>y>>z;
    cin>>m>>n;
    cin>>s;
    ll sum = 0;
    vector<int> t(1);
    for (int i = 0; i < n; i++) {
        bool fit = false;
        int val;
        if(s[i] == 'R') {
            val=z;
        } else if(s[i] == 'A') {
            val=y;
        } else {
            val=x;
        }
        for (int i = 0; i < t.size(); i++) {
            if(val+t[i] > m) continue;
            t[i] += val;
            fit = true;
            break;
        }
        if(!fit) {
            t.push_back(val);
        }
    }
    cout<<t.size()<<"\n";
    return 0;
}
