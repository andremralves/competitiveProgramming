/**
 *    author: mralves 
 *    created: 13-05-2023 09:04:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    string s, t;
    cin>>s>>t;
    int n = s.size();
    set<int> sub = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
    vector<int> sCnt(100);
    vector<int> tCnt(100);
    for(int i= 0; i<n; i++) {
        sCnt[s[i]-'@']++;
        tCnt[t[i]-'@']++;
    }

    bool ok = false;
    int diff = 0;
    for(int i=1; i<100; i++) {
        int x = sCnt[i] - tCnt[i];
        if(x > 0 and sub.count(i+'@') and tCnt[0] >= x) {
            tCnt[0]-=x;
            tCnt[i]+=x;
        } else if(x < 0 and sub.count(i+'@') and sCnt[0] >= -x) {
            sCnt[0] += x;
            sCnt[i] -= x;
        }
        diff += abs(sCnt[i] - tCnt[i]);
    }
    if(diff == 0) ok = true;
    cout<<(ok ? "Yes\n" : "No\n");
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
