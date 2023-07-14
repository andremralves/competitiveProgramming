#include <bits/stdc++.h>
using namespace std;

int n = 6;
vector<vector<int>> adj(n);
vector<bool> visited(n);

int main() {
    vector<int> col(n);
    col[0] = 0;
    auto dfs = [&](int u, int p, auto&& dfs) -> void {
        for (int v : adj[u])
            if (v != p) {
                col[v] = col[u] ^ 1;
                dfs(v, u, dfs);
            }
    };
    dfs(0, -1, dfs);
}
