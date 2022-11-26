/**
 *    author: mralves 
 *    created: 25-11-2022 16:17:17       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    int n;
    cin>>n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++) {
        char c;
        cin>>c;
        if(c == '+') {
            int x;
            cin>>x;
            pq.push(x);
        } else if(c == '?') {
            if(pq.empty()) {
                cout<<"-1\n";
            } else {
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
    }
    return 0;
}
