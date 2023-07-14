#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
int main(){
  long long N;
  cin >> N;
  vector<bool> prime(MAX + 1, true);
  vector<int> p;
  for (int i = 2; i <= MAX; i++){
    if (prime[i]){
      p.push_back(i);
      for (int j = i * 2; j <= MAX; j += i){
        prime[j] = false;
      }
    }
  }
  int cnt = p.size();
  cout<<p[p.size()-1]<<"\n";
  vector<long long> pp(cnt);
  for (int i = 0; i < cnt; i++){
    pp[i] = (long long) p[i] * p[i];
  }
  long long ans = 0;
  for (int i = 0; i < cnt; i++){
    long long a = p[i];
    if (a * a * a * a * a > N){
      break;
    }
    for (int j = i + 1; j < cnt; j++){
      long long b = p[j];
      if (a * a * b * b * b > N){
        break;
      }
      auto itr = upper_bound(pp.begin() + j + 1, pp.end(), N / a / a / b);
      ans += itr - (pp.begin() + j + 1);
    }
  }
  cout << ans << endl;
}
