#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n, arr[10001];
    string bxs;
    cin>>n;
    cin>>bxs;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (int i = 0; i < bxs.length()-1; i++) {
        cout<<bxs<<endl;
        if(bxs[i] == '0' and bxs[i+1] == '1') {
            if(arr[i] > arr[i+1]) {
                bxs[i] = '1';
                bxs[i+1] = '0';
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if(bxs[i] == '1') {
            ans +=arr[i];
        }
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
