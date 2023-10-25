#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

struct Item {
  int time, id;
  bool is_start;
  bool operator<(Item &b) {
    return this->time < b.time;
  }
};

int main() {
  setIO("lifeguards");
  int N;
  cin>>N;
  vector<Item> items;
  for(int i=0; i<N; i++) {
    int l, r;
    cin>>l>>r;
    items.push_back({l, i, true});
    items.push_back({r, i, false});
  }

  sort(items.begin(), items.end());

  set<int> curCows;
  vector<int> aloneTime(N);
  int prevTime;
  int totTime = 0;
  for(int i=0; i<(int)items.size(); i++) {
    int curTime = items[i].time;
    if(curCows.size() > 0) {
      totTime += curTime - prevTime;
    }
    if(curCows.size() == 1) {
      aloneTime[*curCows.begin()] = curTime-prevTime;
    }

    if(items[i].is_start)
      curCows.insert(items[i].id);
    else
      curCows.erase(items[i].id);

    prevTime = curTime;
  }
  cout<<totTime-*min_element(aloneTime.begin(), aloneTime.end())<<"\n";

  return 0;
}
