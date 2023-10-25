#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  return a.second > b.second;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  setIO("rental");

  int N, M, R;
  cin>>N>>M>>R;

  vector<int> cows(N), rents(R);
  vector<pair<int, int>> buys(M);
  for(int i=0; i<N; i++) cin>>cows[i];
  for(int i=0; i<M; i++) {
    int x, y;
    cin>>x>>y;
    buys[i] = {x, y};
  }
  for(int i=0; i<R; i++) cin>>rents[i];

  sort(cows.begin(), cows.end());
  sort(buys.begin(), buys.end(), cmp);
  sort(rents.rbegin(), rents.rend());

  vector<int> cowRent(N), cowSell(N);
  int j = 0;
  for(int i=0; i<N; i++) {
    if(j >= R) break;
    cowRent[i] = rents[j];
    j++;
  }

  j = 0;
  for(int i=N-1; i>=0; i--) {
    if(j >= M) break;
    int milk = cows[i];
    int val = 0;
    while(j < M and milk > 0) {
      int take = min(milk, buys[j].first);
      buys[j].first -= take;
      milk -= take;
      val += take*buys[j].second;
      if(buys[j].first == 0)
        j++;
    }
    cowSell[i] = val;
  }

  long long ans = 0;
  for(int i=0; i<N; i++) {
    ans += max(cowRent[i], cowSell[i]);
  }

  cout<<ans<<"\n";
  return 0;
}
