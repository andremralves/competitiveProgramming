#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {

}

void printArr(vector<ll> a) {
    for(auto i: a) {
        cout<<i<<" ";
    }
    cout<<"\n";
}
            

int main (int argc, char *argv[])
{
    while (cin.peek() != EOF)
    {
        string line;
        getline(cin, line);
        istringstream iss(line);
        vector<ll> a;
        vector<ll> b;
        vector<ll> ori;
        ll num;
        while(iss>>num) {
            a.push_back(num);
        }
        b = a;
        ori = a;
        sort(b.begin(), b.end());
        vector<ll> ans;
        for(ll i=a.size()-1; i>=0; i--) {
            //cout<<b[i]<<a[i]<<"\n";
            if(a[i] == b[i]) continue;
            if(a[0] != b[i]) {
                ll cnt=a.size();
                for(auto it=a.begin();it!=a.end();it++) {
                    if(*it == b[i]) {
                        //cout<<b[i]<<"\n";
                        ans.push_back(cnt);
                        //cout<<"before:\n";
                        //printArr(a);
                        reverse(a.begin(), ++it);
                        //cout<<"after:\n";
                        //printArr(a);
                        break;
                    }
                    cnt--;
                }
            }
            ll cnt=0;
            for(auto it=a.begin();it!=a.end();it++) {
                if(cnt==i) {
                    //cout<<b[i]<<"\n";
                    ans.push_back(a.size()-cnt);
                    //cout<<"before:\n";
                    //printArr(a);
                    reverse(a.begin(), ++it);
                    //cout<<"after:\n";
                    //printArr(a);
                    break;
                }
                cnt++;
            }
        }
        ans.push_back(0);
        printArr(ori);
        for(ll i=0; i<ans.size();i++) {
            if(i==ans.size()-1)
                cout<<ans[i]<<"\n";
            else
                cout<<ans[i]<<" ";
        }
    }
    return 0;
}
