#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    vector<bool> ans(n);
    long long prod = 1;
    for(int i=1; i<n; i++) {
        if(gcd(i, n) == 1) {
            prod = prod * i % n;
            ans[i] = 1;
        }
    }
    if(prod != 1)
        ans[prod] = 0;

    cout<<count(ans.begin(), ans.end(), true)<<"\n";
    for(int i=0; i<n; i++) {
        if(ans[i]) 
            cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}

// 2 -> 1
// 3 -> 1
// 4 -> 1
// 5 -> 6
// 6 -> 1
// 7 -> 1

