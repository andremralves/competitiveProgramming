/**
 *    author: mralves 
 *    created: 25-11-2022 16:17:17       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int checkVal(char c) {
    if(c >= '0' and c <= '9') {
        return c - '0';
    } else if(c == 'K' || c == 'J' || c== 'Q') {
        return 10;
    } else if(c == 'A') {
        return 1;
    } else {
        return 10;
    }
}

int main (int argc, char *argv[])
{
    vector<string> card;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            string s;
            cin>>s;
            card.push_back(s);
        }
    }
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        int val = checkVal(card[i][0]);
        //cout<<card[i][0]<<" "<<val<<"\n";
        sum+=val;
        if(sum > 21) {
            sum -= val;
            break;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
