#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, h;
  cin>>a>>b>>h;
  if(b<a) swap(a, b);
  cout<<b*h-(b*h-(a*h))/2<<"\n";
  return 0;
}
