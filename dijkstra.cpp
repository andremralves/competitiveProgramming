/**
 *    author: mralves 
 *    created: 11-05-2023 21:24:59       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

const int INF = 1000000000;

vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> &d, vector<int> &p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false); // used
    d[s] = 0;

    for(int i=0; i<n; i++) {
        int v = -1;
        for(int j =0; j<n; j++) {
            if(!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }

        if(d[v] == INF)
            break;

        u[v] = true;

        for(auto edge: adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if(d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}

int main ()
{
    // simulation
    adj = {
        {},
        {{2, 6}, {4, 1}},
        {{1, 6}, {3, 5}, {4, 2}},
        {{2, 5}, {5, 5}},
        {{1, 1}, {2, 2}, {5, 1}},
        {{3, 5}, {4, 1}}
    };

    // 1 to 4
    int start = 1, end = 5;
    vector<int> d, p;
    dijkstra(1, d, p);

    cout<<d[end]<<"\n";

    vector<int> path;
    for(int i = end; i != -1; i = p[i]) {
        path.push_back(i);
    }

    reverse(path.begin(), path.end());

    for(auto x : path) {
        cout<<x<<" ";
    }

    cout<<"\n";

    return 0;
}
