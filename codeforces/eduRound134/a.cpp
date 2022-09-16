#include <bits/stdc++.h>

using namespace std;

int solve(string a, string b) {
    string str = a;
    str.append(b);

    int eqMax = 0;
    int twoCount = 0;
    for (int i = 0; i < str.length(); i++) {
        int eq = 0;
        for (int j = 0; j < str.length(); j++) {
            if(str[i] == str[j]) eq++;
        }
        if(eq > eqMax) eqMax = eq;
        if(eq == 2) twoCount++;
    }
    if(eqMax == 4) return 0;
    if(eqMax == 1) return 3;
    if(eqMax == 2) return twoCount > 2 ? 1 : 2;
    return 1;
}

int main (int argc, char *argv[])
{
    int t;    
    cin >> t;
    for (int i = 0; i < t; i++) {
        string a,b;
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }
    return 0;
}
