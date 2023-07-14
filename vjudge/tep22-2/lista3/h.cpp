/**
 *    author: mralves 
 *    created: 18-11-2022 19:40:58       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    int n;
    cin>>n;
    map<string, string> mp;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string line, line2;
        getline(cin, line);
        getline(cin, line2);
        mp.insert({line, line2});
    }
    int t;
    cin>>t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        string line;
        getline(cin, line) ;
        cout<<mp[line]<<"\n";
    }
    return 0;
}

