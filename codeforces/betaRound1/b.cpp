#include <bits/stdc++.h>
using namespace std;

string encode_col(int col) {
  string code = "";
  while(col > 0) {
    code += (col%26==0?26:col%26)+'A'-1;
    col = (col+25)/26-1;
  }
  reverse(code.begin(), code.end());
  return code;
}
int decode_col(string col) {
  int res = 0;
  int p = 1;
  reverse(col.begin(), col.end());
  for(int i=0; i<(int)col.size(); i++) {
    res += (col[i]-'A'+1)*p;
    p *= 26;
  }
  return res;
}

int main() {
  int t; cin>>t;
  while(t--) {
    string s;
    cin>>s;
    int N = s.size();
    int r = s.find('R');
    int c = s.find('C');
    if(r != -1 and c != -1 and isdigit(s[r+1]) and isdigit(s[c+1])) {
      string row = s.substr(1, c-1);
      string col = s.substr(c+1, N-c-1);
      cout<<encode_col(atoi(&col[0]))<<row<<"\n";
    } else {
      int i = 0;
      while(isalpha(s[i])) i++;
      cout<<"R"<<s.substr(i)<<"C"<<decode_col(s.substr(0, i))<<"\n";
    }

  }
  return 0;
}
