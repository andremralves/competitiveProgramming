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

int isCross(vector<vector<char>> &M, int a, int b) {
    if(M[a][b] != '#') return 0;

    int d = 1;     
    bool isX = true;
    int size = 0;
    while(true) {
        if(a+d == M.size() or a-d < 0 or b+d == M[0].size() or b-d < 0) break;
        if(M[a+d][b+d] == '#' and M[a+d][b-d] == '#' and M[a-d][b+d] == '#' and M[a-d][b-d] == '#') {
            size++; 
            isX = true;
        } else {
            break;
        }
        d++;
    }
    return size;
}

void solve() {
    int h, w;
    cin>>h>>w;
    vector<vector<char>> A(h, vector<char>(w));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            cin>>A[i][j];
        }
    }

    vector<int> ans(min(h, w)+1, 0);
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            ans[isCross(A, i, j)]++;
        }
    }

    for(int i=1; i<ans.size(); i++) {
        cout<<ans[i]<<(i==ans.size()-1?"\n":" ");
    }
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

