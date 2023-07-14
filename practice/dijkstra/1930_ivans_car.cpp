// https://acm.timus.ru/problem.aspx?space=1&num=1930
#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> adj;

const int INF = 100000000;

void dijkstra(int s, vector<int> &d) {
    int n = adj.size();
    d.assign(n, INF);

    vector<bool> u(n, false); 
    priority_queue<pair<int, int>> pq;
    pq.push({s, 0});
    pq.push({s, 1});
    d[s] = 0;
    while(!pq.empty()) {
        auto curr = pq.top();
        pq.pop();

        if(curr.second == INF)
            break;

        u[curr.first] = true;
        for(auto edge : adj[curr.first]) {
            int to = edge.first;
            int add = 0;
            if(curr.second != edge.second) add = 1;
            if(d[curr.first] + add < d[to]) {
                d[to] = d[curr.first] + add;
                pq.push(edge);
            }
        }
    }
}

int main() {
     
    int n, m, from, to;
    cin>>n>>m;
    adj.assign(n+1, {});
    for(int i=0; i<m; i++) {
        int u, v;
        cin>>u>>v;
        adj[u].push_back({v, 1});
        adj[v].push_back({u, 0});
    }
    cin>>from>>to;
    vector<int> d;
    dijkstra(from, d);
    cout<<d[to]<<"\n";
    return 0;
}
