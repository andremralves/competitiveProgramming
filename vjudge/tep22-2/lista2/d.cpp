#include <bits/stdc++.h>
#include <stack>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    stack<string> st;
    while (t--)
    {
        string w;
        cin>>w;
        if(w == "Sleep") {
            string p;
            cin>>p;
            st.push(p);
        } else if(w == "Test") {
            if(!st.empty()) {
                cout<<st.top()<<"\n";
            } else {
                cout<<"Not in a dream"<<"\n";
            }
        } else {
            if(!st.empty()) {
                st.pop();
            } 
        }
    }
    return 0;
}
