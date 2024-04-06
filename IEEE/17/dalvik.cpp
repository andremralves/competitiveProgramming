#include<bits/stdc++.h>

using namespace std;



long long v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18; 



long long A, B, C;



void solve(){

  int T;
  cin >> T;

  while(T--){
    cin >> A >> B >> C;
    v0 = A;
    v1 = B;
    v2 = C;
    v3 = 1;

    v4 = v3 - v3;
    v5 = v4 - v3;
    v6 = v3;
    v7 = v4;
    v7 = v7 - v1;
    v8 = v0;
    v9 = v0;
    v9 = v0 + v1;

    v10 = v4;
    v11 = v4;
    v12 = v3;

    // cout << "l0\n";

    l0:
    v11 = v11 + v1;
    v10 = v10 + v0;
    v13 = v10;
    v14 = v4;
    v15 = v4; 
    // cout << "l1\n";

    l1:
    // cout << "v16: " << v16 << " v1: " << v1 << "\n";
    v16 = v13 + v13;
    if (v16 <= v1) goto l2;
    v13 = v13 - v1;
    v14 = v14 + v3;
    v15 = v15 + v1;
    goto l1;
    // cout << "l2\n";
    

    l2:
    if (v13 > v4) goto l3;
    v13 = v4 - v13;
    // cout << "l3\n";

    l3:
    v17 = v4;
    v18 = v3;
    // cout << "l4\n";

    l4:
    v17 = v17 + v13;
    v18 = v18 + v3;
    if (v18 <= v6) goto l4;
    v18 = v3;

    // cout << "l5\n";

    l5:
    v17 = v17 - v9;
    v18 = v18 + v3;
    if (v18 <= v12) goto l5;
    if (v17 >= v4) goto l6;
    v5 = v14;
    v6 = v12;
    v7 = v15;
    v8 = v10;
    v9 = v13;

    // cout << "l6\n";

    l6:
    v12 = v12 + v3;
    if (v12 <= v2) goto l0;
    cout << v6 << "\n";
  }
}



int main(){

    solve();

    return 0;

}

