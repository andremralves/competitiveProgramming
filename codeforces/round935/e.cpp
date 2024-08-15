#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, X;
  cin>>N>>X;
  vector<int> a(N+1);
  for(int i=1; i<=N; i++) {
    cin>>a[i];
  }
  vector<int> used(N+1);
  int l=1, r=N+1;
  while(r-l>1) {
    int m = (r+l)/2;
    used[a[m]] = 1;
    //cout<<m<<" ";
    //cout<<"a[m]:"<<a[m]<<"\n";
    if(a[m] <= X) {
      l = m;
    } else {
      r = m;
    }
  }
  if(a[l] == X) {
    cout<<0<<"\n";
  } else if(!used[X]){
    cout<<"1\n";
    cout<<find(a.begin(), a.end(),X)-a.begin()<<" "<<l<<"\n";
  } else {
    int xpos=find(a.begin(), a.end(),X)-a.begin();
    if(a[l] < X) {
      cout<<"1\n";
      cout<<xpos<<" "<<l<<"\n";
    } else {
      cout<<"2\n";
      cout<<xpos<<" "<<l<<"\n";
      int p = 0;
      for(int i=1; i<=N; i++) {
        if(a[i] < X and !used[a[i]]) {
          p = i;
          break;
        }
      }
      cout<<xpos<<" "<<p<<"\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin>>t;
  while(t--)solve();
}
