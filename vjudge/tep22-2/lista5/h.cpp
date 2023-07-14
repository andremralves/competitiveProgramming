/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

ll ans = 1;
int findRoot(vector<int> &ps, int x) {
    return ps[x] == x? x : (ps[x] = findRoot(ps, ps[x]));
}

bool sameSet(vector<int> ps, int p, int q) {
    return findRoot(ps, ps[p]) == findRoot(ps, ps[q]);
}

void unionSet(vector<int> &ps, vector<int> &size, int p, int q) {
    if(sameSet(ps, p, q)) return;
    int rootP = findRoot(ps, p);
    int rootQ = findRoot(ps, q);
    
    ans<<=1;
    if(size[rootP] < size[rootQ])
        swap(rootP, rootQ);

    ps[rootQ] = rootP;
    size[rootP] += size[rootQ];
}


int main ()
{
    int n, m;
    cin>>n>>m;

    vector<int> ps(n+1);
    vector<int> size(n+1, 1);
    iota(ps.begin(), ps.end(), 0);

    for (int i = 0; i < m; i++) {
        int p, q;
        cin>>p>>q;
        unionSet(ps, size, p, q);
    }

    cout<<ans<<"\n";

    return 0;
}
