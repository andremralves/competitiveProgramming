#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T; cin>>N>>T;
  map<long long, int> mp;
  vector<long long> score(N);
  mp[0] = N;
  for(int i=0; i<T; i++) {
    int a, b;
    cin>>a>>b;
    a--;
    mp[score[a]]--;
    if(mp[score[a]] == 0) {
      mp.erase(score[a]);
    }
    score[a] += b;
    mp[score[a]]++;
    cout<<mp.size()<<"\n";
  }

  return 0;
}
