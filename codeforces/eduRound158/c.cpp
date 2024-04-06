#include<bits/stdc++.h>
using namespace std;

void solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  int mx = *max_element(a.begin(), a.end());
  int mi = *min_element(a.begin(), a.end());
  vector<int> ans;
  while(mx != 1) {
    //cout<<mi<<" "<<mx<<"\n";
    if(mi == mx) break;
    int plus = 1;
    if(mx&1) plus = 2;
    ans.emplace_back(plus);
    mx = (mx+plus)/2;
    mi = (mi+plus)/2;
  }
  if(mi != mx)
    ans.emplace_back(2);
  cout<<ans.size()<<"\n";
  if((int)ans.size() <= N and (int)ans.size()>0) {
    for(int i=0; i<(int)ans.size(); i++) {
      cout<<ans[i]<<" ";
    }
    cout<<"\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}
