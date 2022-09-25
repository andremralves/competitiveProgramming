#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, num;
    string s;
    string res;
    cin>>n;
    cin>>s;
    for (int i = n-1; i >= 0 ; i--) {
        if(s[i] == '0'){
            //cout<<"2 dig num: "<<s[i-2]<<s[i-1]<<"\n";
            int ch = (s[i-2]-48)*10+s[i-1]-48;
            //cout<<"sum: "<<(s[i-2]-48)*10+s[i-1]-48<<"\n";
            res.push_back(ch+96);
            i-=2;
        } else {
            res.push_back((int)s[i]+48);
        }
    }
    for (int i = res.length()-1; i >= 0; i--) {
        cout<<res[i];
    }
    cout<<endl;
}
int main (int argc, char *argv[])
{
    int t; 
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
