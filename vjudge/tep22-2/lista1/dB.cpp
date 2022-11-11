#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

bool solve() {
    int n;
    cin>>n;
    vector<vector<ll>> m(n+1);
    bool isSym = true;
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            ll x;
            cin>>x;
            // nenhum elemento pode ser negativo
            if(x < 0) isSym = false;
            // verificacao geral 
            if(i > n/2 and x != m[n-1-i][n-1-j]) isSym = false;
            // verificacao da linha do meio em matrizes impares
            if(n%2 != 0 and i == n/2 and j > n/2 and x != m[i][n-1-j]) isSym = false;
            m[i].push_back(x);
        }
    }
    return isSym;
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    int cnt = 1;
    while (t--)
    {
        if(solve()) {
            cout<<"Test #"<<cnt<<": Symmetric.\n";
        } else {
            cout<<"Test #"<<cnt<<": Non-symmetric.\n";
        }
        cnt++;
    }
    return 0;
}

