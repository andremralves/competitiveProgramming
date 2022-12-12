/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

vector<int> visited(10000);
vector<int> values(10000);
map<int, vector<int>> mp;
int sum = 0;

void dfs(int node) {
    //cout<<node<<"\n";
    //cout<<values[node]<<"\n";
    visited[node] = 1;
    sum+=values[node];
    //cout<<"sum: "<<sum<<"\n";
    for(auto f: mp[node]) {
        if(!visited[f])
            dfs(f);
    }
}

void solve() {
    int n, m;
    cin>>n>>m;

    for(int i=0; i<n;i++)visited[i]=0;
    mp.clear();

    //cout<<"n: "<<n<<" m: "<<m<<"\n";
    for (int i = 0; i < n; i++) {
        int x; 
        cin>>x;
        values[i] = x;
        mp.insert({i, vector<int>(0)});
    }
    for (int i = 0; i < m; i++) {
        int f1, f2;
        cin>>f1>>f2;
        mp[f1].push_back(f2);
        mp[f2].push_back(f1);
    }
    
    for (int i = 0; i < n; i++) {
        //cout<<visited[i]<<"\n";
        sum = 0;
        if(!visited[i]) {
            dfs(i);
            if(sum != 0){
                cout<<"IMPOSSIBLE\n";
                return;
            }
        }
    }
    cout<<"POSSIBLE"<<"\n";
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
