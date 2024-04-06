/**
 *    author: mralves 
 *    created: 13-01-2024 11:36:44       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

int get_pos(vector<pair<ll, ll>> &ops, ll q) {
  int i = lower_bound(all(ops), make_pair(q, q))-ops.begin();
  if(i == (int)ops.size()) i = ops.size()-1;
  else if(q<ops[i].first) i--;
  return i;
}

const long long MAXPOS = 1e18;

void solve() {
  int N, Q;
  cin>>N>>Q;
  vector<pair<ll, ll>> ops;
  ll pos = 0;
  map<ll, ll> mp;
  for(int i=0; i<N; i++) {
    int op; ll x;
    cin>>op>>x;
    if(pos == MAXPOS) continue;
    if(op == 1) {
      pos++;
      ops.emplace_back(pos, pos);
      mp[pos] = x;
    } else {
      if((x+1) > MAXPOS/pos) {
        ops.emplace_back(pos+1, MAXPOS);
        pos = MAXPOS;
      }
      else {
        ops.emplace_back(pos+1, pos*(x+1));
        pos*=(x+1);
      }
    }
  }
  //for(auto [x, y]:ops) {
  //  cout<<x<<" "<<y<<"\n";
  //}
  while(Q--) {
    ll q; cin>>q;
    int i = get_pos(ops, q);
    auto [x, y] = ops[i];
    //cout<<x<<" "<<y<<"\n";
    //cout<<"q:"<<q<<"\n";
    while(!mp.count(q)) {
      q = q%(x-1);
      if(q == 0) q = (x-1);
      i = get_pos(ops, q);
      tie(x, y) = ops[i];
      //cout<<x<<" "<<y<<"\n";
      //cout<<"q:"<<q<<"\n";
    }
    cout<<mp[q]<<" ";
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
