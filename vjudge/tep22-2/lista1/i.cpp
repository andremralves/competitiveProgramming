#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void printMatrix(vector<vector<char>> a) {
    for (ll i = 0; i < a.size(); i++) {
        for (ll j = 0; j < a.size(); j++) {
            cout<<a[i][j]<<" ";
        } 
        cout<<endl;
    } 
    cout<<"----------------"<<endl;
}

bool compareMatrices(vector<vector<char>> a, vector<vector<char>> b) {
    for (ll i = 0; i < a.size(); i++) {
        for (ll j = 0; j < a.size(); j++) {
            if(a[i][j] != b[i][j]) return false;
        } 
    } 
    return true;
}

bool compare90(vector<vector<char>> a, vector<vector<char>> b) {
    for(ll i=0; i<a.size(); i++){
        for(ll j=0, aj=a.size()-1; j<a.size(); j++, aj--){
            if(a[aj][i] != b[i][j]) return false;
        }
    }
    return true;
}

bool compare180(vector<vector<char>> a, vector<vector<char>> b) {
    for(ll i=0, ai=a.size()-1; i<a.size(); i++, ai--){
        for(ll j=0, aj=a.size()-1; j<a.size(); j++, aj--){
            if(a[ai][aj] != b[i][j]) return false;
        }
    }
    return true;
}

bool compare270(vector<vector<char>> a, vector<vector<char>> b) {
    for(ll i=0, ai=a.size()-1; i<a.size(); i++, ai--){
        //cout<<i<<"->";
        for(ll j=0; j<a.size(); j++){
            //cout<<a[i][aj]<<" "<<b[i][j]<<endl;;
            if(a[j][ai] != b[i][j]) return false;
        }
    }
    return true;
}

vector<vector<char>> reverseM(vector<vector<char>> a) {
    vector<vector<char>> revA(a.size(), vector<char>(a.size()));
    for (ll i = 0, ai=a.size()-1; i < a.size(); i++, ai--) {
        for (ll j = 0; j < a.size(); j++) {
            revA[i][j] = a[ai][j];
        } 
    } 
    return revA;
}

void printAns(string ans, int cnt) {
    cout<<"Pattern "<<cnt<<" was "<<ans<<"."<<endl;
}

void solve(int n, int cnt) {
    vector<vector<char>> a(n, vector<char>(n));
    vector<vector<char>> b(n, vector<char>(n));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>a[i][j];
        }
        for (ll j = 0; j < n; j++) {
            cin>>b[i][j];
        }
    }
    string ans ="improperly transformed";
    for(ll r=0; r<2; r++) {
        if(r == 1) a = reverseM(a);
        for(ll m=0; m<4; m++) {
            if(m==0) {
                if(r == 0 and compareMatrices(a, b)) {
                    ans = "preserved";
                    printAns(ans, cnt);
                    return;
                } else if(r == 1 and compareMatrices(a, b)) {
                    ans = "reflected vertically";
                    printAns(ans, cnt);
                    return;
                }
            } else if(m == 1) {
                if(r == 0 and compare90(a, b)) {
                    ans = "rotated 90 degrees";
                    printAns(ans, cnt);
                    return;
                } else if(r == 1 and compare90(a, b)) {
                    ans = "reflected vertically and rotated 90 degrees";
                    printAns(ans, cnt);
                    return;
                }
            } else if(m == 2) {
                if(r == 0 and compare180(a, b)) {
                    ans = "rotated 180 degrees";
                    printAns(ans, cnt);
                    return;
                } else if(r == 1 and compare180(a, b)) {
                    ans = "reflected vertically and rotated 180 degrees";
                    printAns(ans, cnt);
                    return;
                }
            } else if(m == 3) {
                if(r == 0 and compare270(a, b)) {
                    ans = "rotated 270 degrees";
                    printAns(ans, cnt);
                    return;
                } else if(r == 1 and compare270(a, b)) {
                    ans = "reflected vertically and rotated 270 degrees";
                    printAns(ans, cnt);
                    return;
                }
            }
        }
    }
    printAns(ans, cnt);
    return;
}

int main (int argc, char *argv[])
{
    int n;
    int cnt = 0;
    while (cin>>n)
    {
        solve(n, ++cnt);
    }
    return 0;
}
