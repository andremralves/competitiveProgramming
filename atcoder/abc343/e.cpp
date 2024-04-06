#include <bits/stdc++.h>
using namespace std;

int inter2(array<int, 2>a, array<int, 2>b, array<int, 2>c) {
  // remove intersection

}

int calc_area3(array<int, 2>a, array<int, 2>b, array<int, 2>c) {
  return 0;
}

int main() {
  int V[3];
  int a=0, b=0, c=0;
  for(auto &v:V) cin>>v;
  sort(V, V+3);

  for(int i=-7; i<=7; i++)
  for(int j=-7; j<=7; j++)
  for(int k=-7; k<=7; k++)
  for(int l=-7; l<=7; l++)
  for(int m=-7; m<=7; m++)
  for(int n=-7; n<=7; n++) {
    calc_area2({a, i}, {b, j}, {c, k});
  }


  return 0;
}
