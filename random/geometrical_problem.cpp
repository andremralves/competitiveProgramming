#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int f(vector<int> a, int k) {
    ll cur = a[0];
    int cnt1 = 0;
    for(int i=1; i<a.size(); i++) {
        ll buf = cur;
        cur *= k;
        if(cur != a[i]) {
            cur = buf;
            cnt1++;
        }
    }
    int cnt2 = 1;
    ll cur2 = a[1];
    for(int i=2; i<a.size(); i++) {
        ll buf = cur;
        cur2 *= k;
        if(cur2 != a[i]) {
            cur2 = buf;
            cnt2++;
        }
    }
    return min(cnt1, cnt2);
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    if(n == 1) {
        cout<<"0\n";
        return 0;
    }

    bool all_zero = true;
    for(int i=1; i<n; i++) {
        if(a[i] != 0) {
            all_zero = false;
            break;
        }
    }

    if(all_zero) {
        cout<<"0\n";
        return 0;
    }

    int k1 = 1, k2 = 1;
    int ans = 2;
    for(int i=0; i<2; i++) {
        if(a[0] != 0)
            k1 = a[1]/a[0];
        if(a[n-2] != 0)
            k2 = a[n-1]/a[n-2];
        int f1 = f(a, k1);
        int f2 = f(a, k2);
        if(f1 == 0 or f2 == 0) {
            ans = 0;
        } else if(f1 == 1 or f2 == 1) {
            ans = min(ans, 1);
        }         
        if(a[0] == 0)
            reverse(a.begin()+1, a.end());
        else
            reverse(a.begin(), a.end());
    }
    cout<<ans<<"\n";
    return 0;
}
