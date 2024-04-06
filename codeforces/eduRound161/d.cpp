/**
 *    author: mralves 
 *    created: 18-01-2024 11:33:48       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N; cin>>N;
  vector<int> a(N), d(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<N; i++) {
    cin>>d[i];
  }

  vector<int> nxt(N, -1), prev(N, -1);
  for(int i=0; i<N; i++) {
    if(i>0)
      prev[i] = i-1;
    if(i<N-1)
      nxt[i] = i+1;
  }

  vector<int> round(N+1);
  vector<int> die_round(N);
  vector<int> die;

  auto calc_damage = [&](int i) {
    int x = 0;
    if(prev[i] != -1) {
      x += a[prev[i]];
    }
    if(nxt[i] != -1) {
      x += a[nxt[i]];
    }
    return x;
  };

  for(int i=0; i<N; i++) {
    int x = calc_damage(i);
    if(x > d[i]) {
      d[i] = -1;
      die.emplace_back(i);
      die_round[i] = 1;
    }
  }
  for(int k=0; k<(int)die.size(); k++) {

    for(int t=k; t<(int)die.size(); t++) {
      int i = die[t];
      //cout<<"i:"<<i<<"\n";
      if(nxt[i] != -1)
        prev[nxt[i]] = prev[i];
      if(prev[i] != -1)
        nxt[prev[i]] = nxt[i];
    }
    int end = (int)die.size();
    for(int t=k; t<end; t++) {
      int i = die[t];
      if(prev[i] != -1 and die_round[prev[i]] == 0) {
        int j = prev[i];
        int x = calc_damage(j);
        if(x > d[j]) {
          die_round[j] = die_round[i]+1;
          die.emplace_back(j);
        }
      }
      if(nxt[i] != -1 and die_round[nxt[i]] == 0) {
        int j = nxt[i];
        int x = calc_damage(j);
        if(x > d[j]) {
          die_round[j] = die_round[i]+1;
          die.emplace_back(j);
        }
      }
    }
    k = end-1;
  }

  for(int i=0; i<N; i++) {
    round[die_round[i]]++;
  }

  for(int i=1; i<=N; i++) {
    cout<<round[i]<<" ";
  }
  cout<<"\n";
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
