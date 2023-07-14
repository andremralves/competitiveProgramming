#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

#include <bits/stdc++.h>

using namespace std;


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

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0; i<s.size()-1; i++) {
        ans++;
        if(s[i+2] == s[i]) ans--;
    }
    cout<<ans<<"\n";
}

int main () {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

