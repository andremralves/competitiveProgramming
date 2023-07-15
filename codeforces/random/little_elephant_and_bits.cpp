#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    bool ok = false;
    int pos = s.find("0");
    if(pos == string::npos) pos = 0;
    for(int i=0; i<(int)s.size(); i++) {
        if(i == pos) continue;
        cout<<s[i];
    }
    cout<<"\n";
    return 0;
}

// 11001010
