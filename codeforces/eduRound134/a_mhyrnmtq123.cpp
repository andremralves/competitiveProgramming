#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
int n,m;
void solve(){
    set<char> sb;
    string s;
    cin>>s;sb.insert(s[0]);sb.insert(s[1]);
    cin>>s;sb.insert(s[0]);sb.insert(s[1]);
    cout<<sb.size()-1<<endl;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int T;cin>>T;
    while(T--) solve();
    return 0;
}
