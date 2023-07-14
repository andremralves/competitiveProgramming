/**
 *    author: mralves 
 *    created: 24-12-2022 18:34:10       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main ()
{
    int n, k;
    cin>>n>>k;
    vector<int> cnt(10000, 0);
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++) {
        for(int j=a[i]-1; j>=0; j--)
            cnt[a[i]] += cnt[j];
        cnt[a[i]]++;
    }

    int ans=0;
    for(int i=0; i<10000; i++) {
        if(cnt[i]>0) {
            ans+=cnt[i]-k;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
