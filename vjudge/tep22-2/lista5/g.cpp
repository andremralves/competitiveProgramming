/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int ps[20001];

void initSet(int n) {
    for(int i=0; i<=n; i++) {
        ps[i] = i;
    }
}

int findSet(int p) {
    return ps[p] == p ? p : ps[p];
}

bool sameSet(int p, int q) {
    return findSet(p) == findSet(q) ? true : false;
}

void unionSet(int p, int q) {
    //same set
    if(sameSet(p, q)) return;

    ps[p] = q;
}

int getLenght(int p, int sum = 0) {
    if(ps[p] == p) return sum;
    sum += abs(p-ps[p])%1000;
    return getLenght(ps[p], sum);
}

void solve() {
    int n;
    cin>>n;

    initSet(n);

    string op;
    while(cin>>op) {
        int i, j;
        if(op == "E") {
            cin>>i;
            int lenght = getLenght(i);
            cout<<lenght<<"\n";
        } else if(op == "I"){
            cin>>i>>j;
            unionSet(i, j);
        } else {
            break;
        }
    }
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
