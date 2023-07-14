/**
 *    author: mralves 
 *    created: 06-12-2022 13:04:59       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;


int main (int argc, char *argv[])
{
    int k;
    while (cin>>k)
    {
        vector<priority_queue<int, vector<int>, std::greater<int> >> a(k);
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                int x;
                cin>>x;
                a[i].push(x);
            }
        }
        int ans0 = 0;
        priority_queue<int, vector<int>, std::greater<int>> gap;
        for (int i = 0; i < k; i++) {
            int first = a[i].top();
            ans0+=first;
            a[i].pop();
            while(!a[i].empty()) {
                gap.push(a[i].top()-first);
                a[i].pop();
            }
        }

        cout<<ans0<<(k == 1?"\n":" ");
        for (int i = 1; i < k; i++) {
            cout<<ans0+gap.top()<<(i == k-1?"\n":" ");
            gap.pop();
        }
        
    }
    return 0;
}
