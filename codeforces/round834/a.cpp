/**
 *    author: mralves 
 *    created: 19-11-2022 19:55:26       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    string s;
    cin>> s;
    string s1;
    for (ll i = 0; i <= s.size(); i++) {
        if(s[i] == 'Y' and i != 0) {
            //cout<<"s1: "<<s1<<"\n";
            if(s1 != "Yes" and s1 != "es" and s1 != "s") {
                cout<<"NO" <<"\n";
                return;
            }
            s1 = "";
        }
        if(i == s.size()) {
            //cout<<"s1: "<<s1<<"\n";
            if(s1 != "Yes" and s1 != "es" and s1 != "s" and s1 != "Ye" and s1 != "Y") {
                cout<<"NO" <<"\n";
                return;
            }
            s1 = "";

        }
        s1 += s[i]; 
    }
    cout<<"YES"<<"\n";
}

//
void solve2() {
    string s;
    cin >> s;
    int n = s.size();
    bool ok = 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'Y') {
            if (i)
            ok &= s[i - 1] == 's';
        } else if (s[i] == 'e') {
            if (i)
            ok &= s[i - 1] == 'Y';
        } else if (s[i] == 's') {
            if (i) ok &= s[i - 1] == 'e';
        } else {
            ok = 0;
        }
    }
    if (ok) cout << "YES\n";
    else cout << "NO\n";
}
int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve2();    
    }
    return 0;
}
