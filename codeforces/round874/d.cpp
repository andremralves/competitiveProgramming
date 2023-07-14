/**
 *    author: mralves 
 *    created: 19-05-2023 11:36:25       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    if(n == 1) {
        cout<<"1\n";
        return;
    }
    
    if(a[0] == n) {
        for(int i=1; i<n; i++) {
            if(a[i] == n-1) {
                if(i == n-1) {
                    cout<<a[i]<<" ";
                    for(int j=0; j<n-1; j++) {
                        cout<<a[j]<<" ";
                    }
                    cout<<"\n";
                    return;
                } else {
                    for(int j=i; j<n; j++) {
                        cout<<a[j]<<" ";
                    }
                    cout<<a[i-1]<<" ";
                    for(int j=0; j<i-1; j++) {
                        cout<<a[j]<<" ";
                    }
                    cout<<"\n";
                    return;
                }
            }
        }
    } else {
        for(int i=1; i<n; i++) {
            if(a[i] == n) {
                if(i == n-1) {
                    cout<<a[i]<<" ";
                    int j;
                    for(j=i-1; j>=0; j--) {
                        if(a[j] < a[0]) {
                            j++;
                            break;
                        }
                        cout<<a[j]<<" ";
                    }
                    for(int k=0; k<j; k++) {
                        cout<<a[k]<<" ";
                    }
                    cout<<"\n";
                    return;
                } else {
                    //cout<<"ok";
                    for(int j=i; j<n; j++) {
                        cout<<a[j]<<" ";
                    }
                    cout<<a[i-1]<<" ";
                    int j;
                    for(j=i-2; j>=0; j--) {
                        if(a[j] < a[0]) {
                            j++;
                            break;
                        }
                        cout<<a[j]<<" ";
                    }
                    //cout<<"'"<<j<<"'";
                    for(int k=0; k<j; k++) {
                        cout<<a[k]<<" ";
                    }
                    cout<<"\n";
                    return;
                }
            }
        }

    }
    
}

void solve2() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    int x = find(a.begin(), a.end(), n) - a.begin();
    if(x == 0 and n > 1) {
        x = find(a.begin(), a.end(), n-1) - a.begin();
    } 

    rotate(a.begin(), a.begin()+3, a.end());
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve2();
    return 0;
}
