/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main ()
{
    int n;
    cin>>n;
    map<int, int> mp;
    map<int, int> mp1;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        int a,b;
        cin>>a>>b; 
        mp.insert({a, b});
        mp1.insert({b, a});
    }

    int x = 0, i = 1;
    while(mp.find(x) != mp.end()) {
        if(mp[x] == 0) break;
        ans[i] = mp[x];
        x = ans[i];
        i+=2;
    }
    i = n-2; x = 0;
    while(mp1.find(x) != mp1.end()) {
        if(mp1[x] == 0) break;
        ans[i] = mp1[x];
        x = ans[i];
        i-=2;
    }
    if (n%2 != 0){
        i = 0;
        int beg, end;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(mp1.find(it->first) == mp1.end()) {
                beg = it->first; 
            }
        }
        for(auto it = mp1.begin(); it != mp1.end(); it++) {
            if(mp.find(it->first) == mp.end()) {
                end = it->first; 
            }
        }
        int i = 0, x = beg;
        ans[0] = beg; ans[n-1] = end;
        while(mp.find(x) != mp.end()) {
            if(!ans[i])
                ans[i] = mp[x];
            x = ans[i];
            i+=2;
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<ans[i]<<(i == n-1 ? "\n": " ");
    }
    return 0;
}
