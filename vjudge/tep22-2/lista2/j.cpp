#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    stack<pair<int, int>> st;
    for(int i=0; i<n; i++) {
        string op;
        cin>>op;
        int num;
        switch (op[1]) {
            case 'U':
                cin>>num;
                if(st.empty())
                    st.push({num, num});
                else {
                    int mi = min(num, st.top().second);
                    st.push({num, mi});
                }
                break;
            case 'I':
                if(st.empty())
                    cout<<"EMPTY"<<"\n";
                else
                    cout<<st.top().second<<"\n";
                break;
            case 'O':
                if(st.empty())
                    cout<<"EMPTY"<<"\n";
                else
                    st.pop();
                break;
        }
    }
    return 0;
}
