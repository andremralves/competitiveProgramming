#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> hmap;
    for (int i = 0; i < nums.size(); i++)
    {
        hmap.insert({nums[i], i});
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int num = target - nums[i];
        map<int, int>::iterator it = hmap.find(num);
        if(it != hmap.end() && it->second != i) {
            return {i, it->second};
        }
    }
    
    return {};
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2,7,11,15};
    vector<int> ans = twoSum(arr, 9);
    cout<<ans[0]<<ans[1]<<endl;
    return 0;
}
