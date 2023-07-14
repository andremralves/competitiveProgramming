/**
 *    author: mralves 
 *    created: 18-11-2022 19:40:58       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    char c;
    set<string> words;
    string line;
    string word = "";
    while (getline(cin, line))
    {
        //cout<<line<<"\n";
        for (ll i = 0; i <= line.size(); i++) {
            //cout<<isalpha(line[i])<<" "<<c<<"\n";
            if(isalpha(line[i])) {
                word += tolower(line[i]);
            } else if(line[i] == ' ') {
                words.insert(word);
                //cout<<word<<"\n";
                word.clear();
            } else if(line[i] == '-') {
                if(i == line.size()-1)
                    break;
                else {
                    word += line[i];
                    continue;
                }
            } else if(i == line.size()){
                words.insert(word);
                word.clear();
            } else {
                words.insert(word);
                word.clear();
            }
        }
    }
    
    for(auto w : words) {
        if(w.size() > 0)
            cout<<w<<"\n";
    }
    return 0;
}
