#include <bits/stdc++.h>

using namespace std;

int main() {
  long long N, K, X, Y;
  cin>>N>>K>>X>>Y;
  cout<<min(K, N)*X+Y*max(0ll, (N-K))<<"\n";
  return 0;
}
