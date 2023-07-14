/**
 *    author: mralves 
 *    created: 04-02-2023 13:16:45       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> used(n, 0);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.begin());
    int i = n-2;
    int cnt = 0;
    while(a[i]*2 > a[n-1]) {
        cnt++;
        i--;
    }
    int x = i;
    int j = i-1;
    for(; i>=0; i--) {
        for(; j>=0; j--) {
            if(a[j]*2 <= a[i]) {
                used[j] = 1;
                j--;
                break;
            }
        }
    }
    int ans = 0;
    for(int i=0; i<=x; i++) {
        if(!used[i]) {
            ans++;
        }
    }
    cout<<max(ans, cnt)<<"\n";
    return 0;
}
