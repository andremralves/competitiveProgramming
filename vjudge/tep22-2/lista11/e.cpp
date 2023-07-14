#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve(int r1, int r2) {
    int lap1 = 1;
    int lap2 = 1;
    int cnt = 1;
    while(true) {
        if(cnt % r1 == 0) {
            lap1++;
        }
        if(cnt % r2 == 0) {
            lap2++;
        }
        if(lap1 - lap2 >= 2) {
            cout<<lap1<<"\n";
            return;
        } else if(lap1 - lap2 == 1) {
            int x1 = cnt%r1;
            int x2 = cnt%r2;
            if(r1-x1 <= r2-x2) {
                cout<<lap1<<"\n";
                return;
            }
        }
        cnt++;
    }
}

int main() {
    int r1, r2;
    while(cin>>r1>>r2) {
        solve(r1, r2);
    }
    return 0;
}



