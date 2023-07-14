/**
 *    author: mralves 
 *    created: 18-11-2022 19:40:58       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

map<string, double> mp;

bool checkRes(double ans, int guess, string op) {
    if(op == "<") {
        return ans<guess;
    } else if(op == "<=") {
        return ans<=guess;
    } else if(op == ">") {
        return ans>guess;
    } else if(op == ">=") {
        return ans>=guess;
    } else {
        return to_string(ans) == to_string(guess);
    }
}

int main (int argc, char *argv[])
{
    int p, g;
    cin>>p>>g;
    for (int i = 0; i < p; i++) {
        string pn;
        double v;
        cin>>pn>>v;
        mp.insert({pn, v});
    }
    for (int i = 0; i < g; i++) {
        string s;
        double sum = 0;
        int guessCnt = 0;
        while (cin>>s)
        {
            if(s == "<" || s == "<=" || s == ">" || s == ">=" || s == "=") {
                guessCnt++;
                double guess;
                cin>>guess;
                cout<<sum<<" "<<guess<<" "<<s<<"\n";
                if(checkRes(sum, guess, s)) {
                    cout<<"Guess #"<<guessCnt<<" was correct.\n";
                } else {
                    cout<<"Guess #"<<guessCnt<<" was incorrect.\n";
                }
                sum = 0;
            } else if(s != "+"){
                sum += mp[s];
            }
        }
    }
    return 0;
}



