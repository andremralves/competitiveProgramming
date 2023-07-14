/**
 *    author: mralves 
 *    created: 06-12-2022 13:04:59       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

struct trainer {
    int d, t, s;
    bool operator<(const trainer &tr) const {
        return s > tr.s;
    }
};

void solve() {
    int n, d;
    cin>>n>>d;
    priority_queue<trainer> pq;
    for (int i = 0; i < n; i++) {
        trainer t;
        cin>>t.d>>t.t>>t.s; 
        t.s = -t.s;
        pq.push(t);
    }
    for (int i = 1; i <= d; i++) {
        vector<trainer> buff;
        while(!pq.empty()) {
            //cout<<"d: "<<pq.top().d<<"day: "<<d<<"\n";
            //cout<<"t: "<<pq.top().t<<"\n";
            //cout<<"s: "<<pq.top().s<<"\n";
            trainer t = pq.top();
            pq.pop();
            if(t.d > i) {
                buff.push_back(t);
            } else if(t.t > 1) {
                t.t--;
                pq.push(t);
                break;
            } else {
                break;
            }
        }
        for(auto t: buff) {
            pq.push(t);
        }
        buff.clear();
    }
    int ans = 0;
    while(!pq.empty()) {
        ans += -pq.top().s;
        pq.pop();
    }
    cout<<ans<<"\n";
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
