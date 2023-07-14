#include <bits/stdc++.h>

using namespace std;

#define iii tuple<int, int, int>

class Ufds {
private:
    vector<int> ps, size;
    int setCnt;

public:

    Ufds(int N): ps(N+1, 0), size(N+1, 1) {
        iota(ps.begin(), ps.end(), 0);
        setCnt = N;
    }

    int findSet(int i) {
        return (i == ps[i]) ? i : (ps[i] = findSet(ps[i]));
    }

    bool sameSet(int i, int j) {
        return findSet(i) == findSet(j);
    }

    int getSetCnt() {
        return setCnt;
    }

    int getSetSize(int i) {
        return size[findSet(i)];
    }

    void unionSet(int i, int j) {
        if(sameSet(i, j)) return;

        int pi = findSet(i);
        int pj = findSet(j);

        if(pi > pj) swap(pi, pj);

        ps[pi] = pj;
        size[pj] += size[pi];
        setCnt--;
    }

};

int main() {

    int n, m;
    cin>>n>>m;
    vector<iii> el(n+1);

    for(int i=0;i<m;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        el[i] = {w, u, v};
    }

    sort(el.begin(), el.end());

    Ufds uf(n);
    int mstCost = 0, edgeCnt = 0;
    int maxW = 0;
    for(auto &[w, u, v]: el) {
        if(uf.sameSet(u, v)) continue;
        uf.unionSet(u, v);
        mstCost += w;
        edgeCnt ++;
        maxW = max(maxW, w);
        if(edgeCnt == n-1) break;
    }

    cout<<mstCost-maxW<<"\n";

    return 0;
}
