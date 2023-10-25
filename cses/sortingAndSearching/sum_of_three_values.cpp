#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int N, X;
  cin>>N>>X;

  vector<pair<int, int>> a(N);
  for(int i=0; i<N; i++) {
    int x;
    cin>>x;
    a[i] = {x, i+1};
  }

  sort(a.begin(), a.end());

  for(int i=0; i<N; i++) {
    int l = i+1, r = N-1, sum = a[i].first;
    while(l<r) {
      int curSum = sum+a[l].first+a[r].first;
      if(curSum < X) {
        l++;
      } else if(curSum > X) {
        r--;
      } else {
        cout<<a[i].second<<" "<<a[l].second<<" "<<a[r].second<<"\n";
        return 0;
      }
    }
  }
  cout<<"IMPOSSIBLE\n";

  return 0;
}

