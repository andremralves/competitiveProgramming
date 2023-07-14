#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void printVector(vector<pair<int, int>> arr) {
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}

bool comparePair(const pair<int, int> &pair1, const pair<int, int> &pair2) {
    if(pair1.second < pair2.second) return true;
    return false;
}

void solve() {
    int n;
    cin>>n;
    vector<pair<ll, ll>> arr;
    for(int i = 0; i<n; i++) {
        ll x, y;
        cin>>x>>y; 
        int mi = min(x, y);
        int ma = max(x, y);
        arr.push_back({mi, ma});
    }
    sort(arr.begin(), arr.end(), &comparePair);
    //printVector(arr);
    ll ans = 0;
    ans = arr[n-1].second*2;
    for(int i = arr.size()-1; i>=0; i--) {
        ans += arr[i].first*2;
    }
    cout<<ans<<endl;
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
