#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int prec(char c)
{
    if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void solve() {
    stack<char> st;
    string line;
    string postfix = "";
    while(getline(cin, line) and line != "") {
        //cout<<line[0]<<"\n";
        if(isalnum(line[0])) {
            postfix += line; 
        } else if(line[0] == '(') {
            st.push(line[0]);
        } else if(line[0] == ')') {
            while (st.top() != '(') {
                postfix += st.top();    
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && prec(line[0]) <= prec(st.top()))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(line[0]);
        }
    }
    //if(line == "") cout<<"end\n";
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }
    cout<<postfix<<"\n";
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    cin.ignore();
    string line;
    getline(cin, line);
    while (t--)
    {
        solve();    
        if(t>0)
            cout<<"\n";
    }
    return 0;
}
