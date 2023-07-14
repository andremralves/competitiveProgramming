/**
 *    author: mralves 
 *    created: 18-11-2022 19:40:58       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {

}

int main (int argc, char *argv[])
{
    string s;
    cin>>s;
    vector<ll> a(100, 0);
    for (int i = 0; i < s.size(); i++) {
        a[s[i]-'a']++;
    }
    for (int i = 0; i < a.size(); i++) {
        if(a[i] > 1) {
            cout<<"no\n";
            return 0;
        }
    }
    cout<<"yes\n";
    return 0;
}
