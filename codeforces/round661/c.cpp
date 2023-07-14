/**
 *    author: mralves 
 *    created: 11-02-2023 01:24:35       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> s(102, 0);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i != j) {
                s[a[i]+a[j]]++;
            }
        }
    }
    int mfreq = -1;
    int val = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] > mfreq) {
            mfreq = s[i];
            val = i;    
        }
        mfreq = max(mfreq, s[i]);
    }
    sort(a.begin(), a.end());
    int l = 0, r =a.size()-1;
    int ans = 0;
    while(l<r) {
        int sum = a[l]+a[r];
        if(sum < val) {
            l++;
        } else if(sum>val) {
            r--;
        } else {
            ans++;
            r--;
            l++;
        }
    }
    cout<<ans<<"\n";

}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
