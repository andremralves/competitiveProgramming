/**
 *    author: mralves 
 *    created: 13-01-2023 16:11:04       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

vector<int> visited(100000, 0);
class Ufds {

private:
vector<int> ps, size;    
int numSets;

public:
    Ufds(int N) {
        ps.assign(N+1, 0); iota(ps.begin(), ps.end(), 0);
        size.assign(N+1, 1);
        numSets = N;
    }

    int findSet(int i) {
        return ps[i] == i ? i : (ps[i] = findSet(ps[i]));
    }
    int findSet2(int i) {
        visited[i] = 1;
        return ps[i] == i ? i : (ps[i] = findSet(ps[i]));
    }

    bool sameSet(int i, int j) {
        return findSet(i) == findSet(j);
    }

    int getSetSize(int i) { 
        if(visited[i] == 1) return 0;
        return size[findSet2(i)]; 
    }
    int getNumSets() { return numSets; }

    // unify two sets
    void unionSet(int i, int j) {

        if(sameSet(i, j)) return;
        //cout<<i<<" "<<j<<"\n";

        int pi = findSet(i);
        int pj = findSet(j);
        
        if(size[pi] > size[pj]) swap(pi, pj);
        
        ps[pi] = pj;
        size[pj] += size[pi];

        --numSets;
    }

};


int main ()
{
    int n, m, c;
    cin>>n>>m>>c;
    
    Ufds uf(n);
    for(int i=0; i<c; i++) {
        int x, y;
        cin>>x>>y;
        uf.unionSet(x, y);
    }


    int mx = 0;
    int cnt = 0;
    for(int i=1; i<=n; i++) {
        int sz = uf.getSetSize(i);
        mx = max(sz, mx);
        if(sz >= m) cnt++;
    }
    if(cnt == 0) {
        cout<<0<<"\n";
        return 0;
    }
    cout<<cnt<<" "<<mx<<"\n";

    
    return 0;
}
