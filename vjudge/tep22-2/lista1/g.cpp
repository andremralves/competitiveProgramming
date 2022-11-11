#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[])
{
    int n, q;
    cin>>n;
    vector<string> names(n+1, "");
    vector<string> newNames(n+1, "");
    for(int i=1; i<=n; i++) {
        string name;
        cin>>name;
        names[i]=name;
    }
    for (int i = 1; i <= n; i++) {
        newNames[i] = names[i];
    }
    for (int i = 1; i <= n; i++) {
        if(names[i] == "?") {
            int ri = 0, li = 0;
            string rName = "", lName = "";
            for (int r = i+1; r <= n; r++) {
                if(names[r] != "?") {
                    rName = names[r];
                    ri = r;
                    break;
                }
            }
            for(int l = i-1; l>=1; l--) {
                if(names[l] != "?") {
                    lName = names[l];
                    li = l;
                    break;
                }
            }
            //cout<<"ok"<<endl;
            //cout<<li<<" "<<i<<" "<<ri<<endl;
            //cout<<lName<<" "<<rName<<endl;
            if(rName == "") {
                string prefix = "";
                for(int k=0; k<i-li; k++) {
                    prefix+= "right of ";
                }
                newNames[i] = prefix + lName;
            } else if(lName == "") {
                string prefix = "";
                //cout<<"left: "<<i-li<<endl;
                for(int k=0; k<ri-i; k++) {
                    prefix+= "left of ";
                }
                newNames[i] = prefix + rName;
            } else if(ri-i > i-li) {
                string prefix = "";
                for(int k=0; k<i-li; k++) {
                    prefix+= "right of ";
                }
                newNames[i] = prefix + lName;
            } else if(i-li > ri-i) {
                string prefix = "";
                //cout<<"left: "<<i-li<<endl;
                for(int k=0; k<ri-i; k++) {
                    prefix+= "left of ";
                }
                newNames[i] = prefix + rName;
            } else {
                newNames[i] = "middle of " + lName + " and " + rName;
            }
        }
    }
    cin>>q;
    for (int i = 0; i < q; i++) {
        int pos;
        cin>>pos;
        cout<<newNames[pos]<<endl;
    }
    return 0;
}
