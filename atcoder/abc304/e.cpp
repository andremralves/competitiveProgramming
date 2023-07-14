/**
 *    author: mralves 
 *    created: 03-06-2023 08:58:49       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

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
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    Ufds uf = Ufds(n);
    for(int i=0; i<m; i++) {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        uf.unionSet(u, v);
    }

    int K;
    cin>>K;
    vector<ii> good;
    for(int i=0; i<K; i++) {
        int x, y;
        cin>>x>>y;
        good.emplace_back(x, y);
    }

    int Q;
    cin>>Q;
    for(int i=0; i<Q; i++) {
        int u, v;
        cin>>u>>v;
        bool ok = false;
        if(uf.sameSet(u, v)) ok = true;
        if(ok) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
