#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);


  // 4 Lines
  // User number: 0 to N-1
  int N; 
  // Cell number: 0 to K-1
  int K;
  // TTI number: 0 to T-1
  int T;
  // RGB (Resource Block Group) number: 0 to R-1
  int R;
  cin>>N>>K>>T>>R;

  // (R*K*T) lines: Initial SINRs
  vector<vector<double>> s(N);
  double s[K][R][N][T];
  for(int i=0; i<R*K*T; i++) {
    // each line has N elements
    for(int j=0; j<N; j++) {
      cin>>s[i];
    }
  }

  return 0;
}
