/**
 *    author: mralves 
 *    created: 19-05-2023 11:36:25       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

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
    vector<int> a(n+1);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }
    Ufds uf = Ufds(n);
    for(int i=1; i<=n; i++) {
        uf.unionSet(i, a[i]);
    }

    int chains = 0, cycles = 0;
    for(int i=1; i<=n; i++) {
        if(uf.findSet(i) == i) {
            if(a[a[i]] == i) {
                chains++;
            } else {
                cycles++;
            }
        }
    }

    cout<<cycles + (bool)chains<<" "<<chains+cycles<<"\n";
        
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

