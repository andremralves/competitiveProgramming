#include <bits/stdc++.h>

using namespace std;

void printAdjList(map<int, vector<int>> adjList) {
    for(auto i: adjList) {
        cout<<i.first<<":"<<endl;
        for(auto j: i.second) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void solve() {
    int n, m;
    cin>>n>>m;
    map<int, vector<int>> adjList; 
    for (int i = 1; i <= n; i++) {
        vector<int> vec;
        adjList.insert({i, vec});
    }
    for (int i = 0; i < m; i++) {
        int tmp[2];
        cin>>tmp[0]>>tmp[1];
        adjList.find(tmp[0])->second.push_back(tmp[1]);
        adjList.find(tmp[1])->second.push_back(tmp[0]);
    }
    for (int i = 1; i <= n; i++) {
        cout<<adjList[i].size()<<endl;
    }
}

int main (int argc, char *argv[])
{
    solve();    
    return 0;
}
