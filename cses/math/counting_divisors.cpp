#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--) {
        int x;
        cin>>x;

        set<int> st;
        for(int i=1; i*i<=x; i++) {
            if(x % i == 0) {
                st.insert(i);
                st.insert(x/i);
            }
        }
        cout<<st.size()<<"\n";
    }

    return 0;
}
