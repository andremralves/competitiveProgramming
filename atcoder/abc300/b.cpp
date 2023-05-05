/**
 *    author: mralves 
 *    created: 29-04-2023 08:54:58       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void printvect(vector<vector<char>> &M) {
    for(int i=0; i<M.size(); i++) {
        for(int j=0; j<M[0].size(); j++) {
            cout<<M[i][j];
        }
        cout<<"\n";
    }

}

void vshift(vector<vector<char>> &M) {
    auto tmp = M;
    for(int i=0; i<M.size(); i++) {
        for(int j=0; j<M[0].size(); j++) {
            if(i<M.size()-1)
                tmp[i][j] = M[i+1][j];
            else 
                tmp[i][j] = M[0][j];
        }
    }
    M = tmp;
}

void hshift(vector<vector<char>> &M) {
    auto tmp = M;
    for(int i=0; i<M.size(); i++) {
        for(int j=0; j<M[0].size(); j++) {
            if(j<M[0].size()-1)
                tmp[i][j] = M[i][j+1];
            else 
                tmp[i][j] = M[i][0];
        }
    }
    M = tmp;
}


void solve() {
    int h, w;
    cin>>h>>w;
    vector<vector<char>> A(h, vector<char>(w));
    vector<vector<char>> B(h, vector<char>(w));

    //vector<vector<char>> t1 ={{1,2,3},{1,2}};
    //vector<vector<char>> t2 ={{1,2,3}, {1,2}};
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            cin>>A[i][j];
        }
    }

    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            cin>>B[i][j];
        }
    }

    bool ans = false;
    for(int i=0; i<h; i++) {
        vshift(B);
        for(int j=0; j<w; j++) {
            hshift(B);
            if(A == B) {
                ans = true;
            }
        }
    }
    cout<<(ans?"Yes\n":"No\n");
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
