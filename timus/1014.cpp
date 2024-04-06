#include <bits/stdc++.h>
using namespace std;

int MX = 1e9;
void solve(int N) {
  if(N == 0) {
    cout<<"0\n";
    return;
  }

  int ans = MX;
  for(int i=1; i*i<=MX; i++) {
    int mul = 1;
    int x = i;
    while(x) {
      mul*=x%10;
      x/=10;
    }
    if(mul == N)
      ans = min(i, ans);
  }
  if(ans == MX)
    cout<<"-1\n";
  else
    cout<<ans<<"\n";
  return;
}

vector<int> get_number(vector<int> divs) {
  int acc = 1;
  vector<int> ans;
  for(int i=0; i<(int)divs.size(); i++) {
    if(acc*divs[i]<10) {
      acc *= divs[i];
      if(i == (int)divs.size()-1) {
        ans.emplace_back(acc);
        acc = 1;
      }
    }
    else {
      ans.emplace_back(acc);
      acc = divs[i];
    }
  }
  if(acc > 1) ans.emplace_back(acc);
  sort(ans.begin(), ans.end());
  return ans;
}

int main() {
  int N;
  cin>>N;

  //solve(N);
  if(N == 0) {
    cout<<10<<"\n";
    return 0;
  }

  if(N == 1) {
    cout<<N<<"\n";
    return 0;
  }

  bool ok = true;
  vector<int> divs;
  vector<int> ans;
  for(int i=2; i*i<=N; i++) {
    while(N%i==0) {
      //cout<<i<<"\n";
      if(i>10) ok = false;
      divs.emplace_back(i);
      N /= i;
    }
  }
  if(N > 1) {
    divs.emplace_back(N);
    if(N > 10) ok = false;
  }
  if(ok) {
    vector<int> a1, a2;
    a1 = get_number(divs);
    reverse(divs.begin(), divs.end());
    a2 = get_number(divs);

    ans = min(a1, a2);
    for(auto x: ans) {
      cout<<x;
    }
  } else {
    cout<<"-1";
  }
  cout<<"\n";
  return 0;
}
