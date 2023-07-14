#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<pair<int, int>> odds;
    vector<pair<int, int>> evens;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if(x%2) {
            odds.push_back({x, i});
        } else {
            evens.push_back({x, i});
        }
    }
    if(odds.size() >= 3) {
        cout<<"YES\n";
        for(int i=0; i<3; i++) {
            cout<<odds[i].second+1<<(i == 2 ? "\n" : " ");
        }
    } else if(odds.size() == 2) {
        if(evens.size() == 1) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
            cout<<odds[0].second+1<<" ";
            for(int i=0; i<2; i++) {
                cout<<evens[i].second+1<<(i == 1 ? "\n" : " ");
            }
        }
    } else if(odds.size() == 1) {
        cout<<"YES\n";
        cout<<odds[0].second+1<<" ";
        for(int i=0; i<2; i++) {
            cout<<evens[i].second+1<<(i == 1 ? "\n" : " ");
        }
    } else {
        cout<<"NO\n";
    }

}
int main ()
{
    int t;     
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


