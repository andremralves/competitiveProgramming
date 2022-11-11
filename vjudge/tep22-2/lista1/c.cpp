#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    int n;
    while(cin>>n) {
        vector<string> names;
        for (int i = 0; i < n; i++) {
            string s; 
            cin>>s;
            names.push_back(s);
        }
        sort(names.begin(), names.end());
        int longest = 0;
        for (int i = 0; i < n; i++) {
            if(names[i].length() > longest) {
                longest = names[i].length();
            }
        }
        int cols = (double)(60-longest)/(double)(longest+2)+0.9;
        if(cols == 0) cols = 1;
        vector<vector<string>> matrix(cols);
        int row = (double)n/(double)cols+0.9;
        int cnt =0;
        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < row; j++) {
                if(cnt == n) break;
                matrix[i].push_back(names[cnt]);
                cnt++;
            }
        }
        cout<<"------------------------------------------------------------"<<endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < matrix.size(); j++) {
                if(i >= matrix[j].size()) {
                    cout<<endl;
                    break;
                }
                if(j != cols-1) {
                    int l = longest-matrix[j][i].length()+2;
                    cout<<matrix[j][i];
                    for (int k = 0; k < l; k++) {
                        cout<<" ";
                    }
                }
                else {
                    int l = longest-matrix[j][i].length()+2;
                    cout<<matrix[j][i];
                    for (int k = 0; k < l; k++) {
                        cout<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}
