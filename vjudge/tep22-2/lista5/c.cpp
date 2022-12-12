/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main ()
{
    int c, r;
    while (cin>>c>>r)
    {
        if(c == 0 and r == 0) return 0;

        map<string, vector<string>> g;
        for (int i = 0; i < c; i++) {
            string a;
            cin>>a;
            g.insert({a, vector<string>(0)});
        }    

        for (int i = 0; i < r; i++) {
            string a1, a2;
            cin>>a1>>a2;
            g[a1].push_back(a2);
            g[a2].push_back(a1);
        }
        
        set<string> visited;
        stack<string> stk;
        int ans = 0;
        for(auto ani: g) {
            if(visited.find(ani.first) == visited.end()) {
                visited.insert(ani.first);
                stk.push(ani.first);
            }
            int cnt = 0;
            while(!stk.empty()) {
                string curr = stk.top();
                stk.pop();
                cnt++;
                for(auto item : g[curr]) {
                    if(visited.find(item) == visited.end()) {
                        visited.insert(item);
                        stk.push(item);
                    }
                }
            }
            ans = max(ans, cnt);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
