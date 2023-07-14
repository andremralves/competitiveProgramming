/**
 *    author: mralves 
 *    created: 18-11-2022 19:40:58       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve(int t) {
    int n, D;
    string sub;
    map<string, int> mp;
    cin>>n;
    for (int i = 0; i < n; i++) {
        string s;
        int d;
        cin>>s>>d;
        mp.insert({s, d});
    }
    cin>>D>>sub;    
    if(mp.find(sub) == mp.end()) {
        cout<<"Case "<<t<<": Do your own homework!"<<"\n";
    } else if(mp[sub] <= D) {
        cout<<"Case "<<t<<": Yesss"<<"\n";
    } else if(mp[sub] > D+5) {
        cout<<"Case "<<t<<": Do your own homework!"<<"\n";
    } else {
        cout<<"Case "<<t<<": Late"<<"\n";
    }
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}


