#include <bits/stdc++.h>
using namespace std;

int N, M;
void brute(vector<int> a) {
  for(int i=0; i<(int)a.size(); i++) {
    brute();
  }
}

int main() {
  cin>>N>>M;
  vector<int> a(N), b(M);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<M; i++) {
    cin>>b[i];
  }
  return 0;
}
