#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

vector<int> l(26, 0);
int main() {
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++) {
        l[s[i]-'a']++;
    }
    for(int i=0; i<26; i++) {
        if(l[i] == 0) {
            cout<<(char)(i+'a')<<"\n";
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}

