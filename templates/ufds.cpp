#include <bits/stdc++.h>

using namespace std;

// 1-indexed
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

    bool sameSet(int i, int j) {
        return findSet(i) == findSet(j);
    }

    int getSetSize(int i) { return size[findSet(i)]; }
    int getNumSets() { return numSets; }

    // unify two sets
    void unionSet(int i, int j) {
        if(sameSet(i, j)) return;

        int pi = findSet(i);
        int pj = findSet(j);
        
        if(size[pi] > size[pj]) swap(pi, pj);
        
        ps[pi] = pj;
        size[pj] += size[pi];

        --numSets;
    }

};

// implementation
int main() {
    Ufds uf(5);
    cout<<"Num of sets: "<<uf.getNumSets()<<"\n";
    uf.unionSet(1, 2);
    cout<<"Num of sets: "<<uf.getNumSets()<<"\n";
    uf.unionSet(3, 4);
    cout<<"Num of sets: "<<uf.getNumSets()<<"\n";
    uf.unionSet(5, 4);
    cout<<"Num of sets: "<<uf.getNumSets()<<"\n";

    cout<<uf.sameSet(1, 4)<<"\n";
    cout<<uf.sameSet(5, 4)<<"\n";

    for(int i=1; i<=5; i++) {
        printf("findSet(%d) = %d, size(%d) = %d\n",
                i, uf.findSet(i), i, uf.getSetSize(i));
    }
}
