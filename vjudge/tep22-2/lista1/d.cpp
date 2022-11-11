#include <bits/stdc++.h>
#include <string>

using namespace std;
using ll = int64_t;

bool solve() {
    int n;
    string blank;
    cin>>blank>>blank;
    cin>>n;
    bool isSym = true;
    vector<ll> v;
    for(int i=0; i<n*n; i++) {
        ll x;
        cin>>x;
        if(x<0) isSym = false;
        v.push_back(x);
    }
    if(!isSym) return isSym;
    int l = 0, r = v.size()-1;
    while(l<r) {
        if(v[l] != v[r]) return false;
        l++, r--;
    }
    return true;
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    int cnt = 1;
    while (t--)
    {
        if(solve()) {
            cout<<"Test #"<<cnt<<": Symmetric.\n";
        } else {
            cout<<"Test #"<<cnt<<": Non-symmetric.\n";
        }
        cnt++;
    }
    return 0;
}
