#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    vector<int> arr;
    cin>>n; 
    for (size_t i = 0; i < n; i++) {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int op = INT_MAX;
    for (size_t i = 0; i < n-2; i++) {
        int tmp = abs(arr[i]-arr[i+1]);
        int tmp1 = abs(arr[i+1]-arr[i+2]);
        if(tmp+tmp1 < op) op = tmp+tmp1;
    } 
    cout<<op<<"\n";
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
