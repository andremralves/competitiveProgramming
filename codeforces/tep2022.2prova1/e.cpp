/**
 *    author: mralves 
 *    created: 25-11-2022 16:17:17       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    ll b, d;
    string s;
    cin>>b>>d;
    cin>>s;
    ll arq = 1;
    ll num = 0;
    ll cnt = 1;
    for (ll i = s.size()-1; i >= 0; i--) {
        if(s[i] == '1') {
            num+=cnt;
        }
        cnt<<=1;
    }
    for (ll i = 0; i < b; i++) {
        //cout<<arq<<"\n";
        arq<<=1; 
    }
    ll comp = arq-num;
    bool ok = false;
    while(arq > 0) {
        if(arq&comp) {
            ok = true;
            cout<<"1";
        }
        else {
            if(ok)
                cout<<"0";
        }
        //cout<<(arq&comp)<<"\n";
        arq>>=1;
    }
    cout<<"\n";
    return 0;
}
