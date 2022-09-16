#include <bits/stdc++.h>
#include <bitset>
#include <vector>

using namespace std;

int arr[8];
int assignment[8];
std::vector<int> adjList[8];
int ans = 0;

bitset<8> bset;

void backtrack(int n) {
    for (int i = 0; i < 2; i++) {
        assignment[n] = i;
        if (n == 7) {
            bool satisfied = true;
            for (int j = 0; j < 8; j++)
                if (assignment[j] == 1) {
                    for (int zz = 0; zz < adjList[j].size(); zz++)
                        if (assignment[adjList[j][zz]] == 1)
                            satisfied = false;
                }
            if (satisfied) {
                int tmp = 0;
                for (int j = 0; j < 8; j++)
                    if (assignment[j] == 1) {
                        tmp += arr[j];
                    }
                if (tmp > ans)
                    ans = tmp;
            }
        } else
            backtrack(n+1);
        assignment[n] = 0;
    }
}

void myBacktrack() {
    bool satisfied = true;
    for (int i = 0; i < 8; i++) {
        if(bset[i] == 1) {
            for (int j = 0; j < adjList[i].size(); j++) {
                if(bset[adjList[i][j]] == 1) {
                    satisfied = false; 
                }
            }
        }
    }
    if(satisfied) {
        int tmp = 0;
        for (int i = 0; i < 8; i++) {
            if(bset[i] == 1)
                tmp += arr[i];
            if(tmp > ans)
                ans = tmp;
        }
    }
    if(bset == 255) return;
    bset = bset.to_ulong() + 1;
    myBacktrack();
}

int main (int argc, char *argv[])
{
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }  
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmpA, tmpB;
        cin >> tmpA >> tmpB;
        adjList[tmpA-1].push_back(tmpB-1);
        adjList[tmpB-1].push_back(tmpA-1);
    }
    //backtrack(0);
    myBacktrack();
    cout << ans << "\n";
    return 0;
}
