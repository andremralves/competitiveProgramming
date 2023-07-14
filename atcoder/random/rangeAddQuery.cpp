#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, q;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>q;
    vector<pair<int, int>> qs;
    for(int i=0; i<q; i++) {
        cin>>qs[i].first;
        cin>>qs[i].second;
    }
    return 0;
}


