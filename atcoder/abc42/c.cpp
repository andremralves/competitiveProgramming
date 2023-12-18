#include <bits/stdc++.h>

using namespace std;

vector<int> d(10);
bool valid(int P) {
  while(P) {
    if(d[P % 10] == 1) {
      return false;
    }
    P /= 10;
  }
  return true;
}

int main() {
  int N, K;
  cin>>N>>K;
  for(int i=0; i<K; i++) {
    int x; cin>>x;
    d[x] = 1;
  }

  int P = N;
  while(!valid(P)) {
    P++;
  }
  cout<<P<<"\n";

}


