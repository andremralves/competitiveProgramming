#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n, x, y;
    cin>>n>>x>>y;
    string a, b;
    cin>>a>>b;
    vector<int> diff;
    for (int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            diff.push_back(i);
        }
    }

    if(diff.size() % 2 != 0) {
        cout<<"-1"<<endl;
        return;
    } else if(diff.size() == 2) {
        int l; int r;
        for(l = 0; l != diff[0];) l++;
        for(r = 0; r != diff[1];) r++;
        if(l+1 == r) cout<< min(x, 2*y) <<endl;
        else cout<<y<<endl;
    } else {
        cout<<y*(diff.size()/2)<<endl;
    }

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
