#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    int x, y;
    cin>>x>>y;
    vector<vector<int>> g = {
        {1,3,5,7,8,10,12},
        {4,6,9,11},
        {2}
    };
    for(auto v : g) {
        int cnt = 0;
        for(int n : v) {
            if(n == x or n == y) cnt++;
        }
        if(cnt == 2) {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
