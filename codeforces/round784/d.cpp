#include <bits/stdc++.h>

using namespace std;

string solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c[] = {0, 0};
    for(auto ch : s) {
        if(ch == 'B') c[0]++;
        else if(ch == 'R') c[1]++;
        else {
            if(max(c[0], c[1]) > 0 && min(c[0], c[1]) == 0) return "NO";
            c[0] = c[1] = 0;
        }
    }
    if(max(c[0], c[1]) > 0 && min(c[0], c[1]) == 0) return "NO";
    return "YES";

}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}
