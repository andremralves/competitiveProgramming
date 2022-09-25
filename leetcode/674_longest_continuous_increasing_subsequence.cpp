#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> nums) {
    int cmax = 0; int count = 1;
    for(int i = 1; i< nums.size(); i++) {
        if(nums[i] <= nums[i-1]) {
            cmax = max(cmax, count);
            count = 1;
        } else {
            count++;
        }
    }
    cout<<cmax<<endl;
}

int main (int argc, char *argv[])
{
    solve({1, 3, 5, 4, 7});
    solve({2, 2, 2, 2, 2});
    return 0;
}
