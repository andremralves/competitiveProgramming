/**
 *    author: mralves 
 *    created: 07-05-2023 00:22:07       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, m;
    cin>>n>>m;
    queue<int> que;
    que.push(n);
    while(!que.empty()) {
        if(que.front() == m) {
            cout<<"YES\n";
            return;
        }
        if(que.front()%3 == 0) {
            int p1 = que.front()/3;
            int p2 = que.front()/3*2;
            que.push(p1);
            que.push(p2);
        }
        que.pop();
    }
    cout<<"NO\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
