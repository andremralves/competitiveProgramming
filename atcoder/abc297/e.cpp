/**
 *    author: mralves 
 *    created: 09-04-2023 09:01:48       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

vector<int> a;
set<ll> sums;
void dfs(int pos, int depth, ll sum) {
    if(depth == 7) return;
    sum += a[pos];
    sums.insert(sum);
    for(int i=0; i<6; i++) {
        dfs(i, depth+1, sum);
    }
}

void solve() {
    int n, k;
    cin>>n>>k;
    a.reserve(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<k; i++) {
        dfs(i, 1, 0);
    }
    auto it = sums.begin();
    int i= 0;
    advance(it, k);
    cout<<*it<<"\n";
}

int main ()
{
    solve();    
    return 0;
}
