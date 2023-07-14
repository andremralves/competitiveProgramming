#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    vector<int> a;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x != 0) {
            a.push_back(x);
        }
    }
    for(int i=0; i<a.size(); i++) {
        cout<<a[i]<<(i == a.size()-1 ? "\n":" ");
    }
}

int main() {
    int n;
    while(1) {
        cin>>n;
        if(n == 0) {
            return 0;
        }
        solve(n);
    }


    return 0;
}
