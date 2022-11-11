#include <bits/stdc++.h>
#include <vector>

using namespace std;

void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        if(i == v.size()-1)
            std::cout<<v[i]<<std::endl;
        else
            std::cout<<v[i]<<" ";
    }
}

void print2dVector(vector<vector<int>> v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[0].size(); j++) {
            if(j == v[0].size()-1)
                std::cout<<v[i][j]<<std::endl;
            else
                std::cout<<v[i][j]<<" ";
        }
    }
}

int main (int argc, char *argv[])
{
    int g, p;
    while (cin>>g>>p)
    {
        if(g == 0 and p == 0) break;
        int s;
        vector<vector<int>> gps(g);
        for(int i = 0; i<g; i++) {
            for (int j = 0; j < p; j++) {
                int in;
                cin>>in;
                gps[i].push_back(in);
                //cout<<gps[i][j]<<endl;
            }
        }
        //cout<<"gps:"<<endl;
        //print2dVector(gps);
        cin>>s;
        vector<int> vec(p, 0);
        vector<vector<int>> sys(s, vec);
        for (int i = 0; i < s; i++) {
            int k;
            cin>>k;
            for (int j = 0; j < k; j++) {
                int in;
                cin>>in;
                sys[i][j] = in;
            }
        }
        //cout<<"sys:"<<endl;
        //print2dVector(sys);
        for (int i = 0; i < s; i++) {
            vector<int> pts(p, 0);
            //cout<<"pts:"<<endl;
            for (int j = 0; j < g; j++) {
                for (int k = 0; k < p; k++) {
                    pts[k]+=sys[i][gps[j][k]-1];
                    //printVector(pts);
                }
            }
            //printVector(pts);
            int max = -1;
            for(int j=0; j<pts.size(); j++) {
                if(pts[j] > max) {
                    max = pts[j];
                }
            }
            vector<int> win;
            for(int j=0; j<pts.size(); j++) {
                if(pts[j] == max) {
                    win.push_back(j+1);
                }
            }

            for(int j=0; j<win.size(); j++) {
                if(j != win.size()-1)
                    cout<<win[j]<<" ";
                else
                    cout<<win[j]<<"\n";
            }
        }
        //cout<<"-----"<<endl;
    }
    return 0;
}
