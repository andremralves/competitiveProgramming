#include <bits/stdc++.h>
using namespace std;

using pair<int, int> pii;
void brute_solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];

  vector<char> comb(20);
  int ans = 1e6;
  for(int k=0; k<=N/2; k++) {
    for(int i=N-k; i<20; i++) comb[i] = 1;
    int tot = accumulate(a.begin(), a.end(), 0);
    do {
      int choose = 0;
      for(int i=0; i<N; i++) {
        if(comb[i]) {
          choose += a[i];
          //cout<<(tot-choose)<<" "<<choose<<" > "<<abs((tot-choose)-choose)<<"\n";
          ans = min(abs((tot-choose)-choose), ans);
        }
      }
    } while(next_permutation(comb.begin(), comb.end()));
  }
  cout<<ans<<"\n";
}

void dp_solve() {
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0; i<N; i++) cin>>a[i];

  // dp [i, j] = best sum choosing j out of i numbers
  vector<pii> dp(N, vector<pii>(N));
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      dp[i][j] = {0, (int)1e6};
    }
  }
  dp[0][0] = {0, 0};
  for(int i=1; i<N; i++) {
    for(int j=0; j<N; j++) {

      for(int k=0; k<j; k++) {
      }
      dp[i][j] = {0, 10};
    }
  }
  cout<<dp[N-1]<<"\n";
}

int main() {
  dp_solve();
  return 0;
}
