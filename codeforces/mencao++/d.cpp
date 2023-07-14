/**
 *    author: mralves 
 *    created: 17-02-2023 16:10:47       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

bool compare(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

int main ()
{
    int x;
    int n, m;
    cin>>n>>m;
    vector<pair<int, int>> a;
    vector<pair<int, int>> b;
    for(int i=0; i<n; i++) {
        cin>>x;
        a.push_back({x, i});
    }
    for(int i=0; i<m; i++) {
        cin>>x;
        b.push_back({x, i});
    }

    sort(a.begin(), a.end(), compare);
    sort(b.begin(), b.end(), compare);

    vector<pair<int, int>> ans;
    int j = 0;
    for(int i=0; i<m; i++) {
        if(j >= n) break;
        if(b[i].first > a[j].first) continue;
        if(b[i].first <= a[j].first) {
            ans.push_back({a[j].second, b[i].second});
            j++;
        }
    }

    cout<<ans.size()<<"\n";
    for(auto x : ans) {
        cout<<x.first+1<<" "<<x.second+1<<"\n";
    }
    return 0;
}
