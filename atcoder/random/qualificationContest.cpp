#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    vector<string> ss(n);
    for(int i=0; i<n; i++) {
        cin>>ss[i];
    }
    sort(ss.begin(), ss.begin() + k);
    for(int i=0; i<k; i++) {
        cout<<ss[i]<<"\n";
    }
    return 0;
}
