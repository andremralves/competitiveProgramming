//https://www.tutorialspoint.com/bitmasking-and-dynamic-programming-in-cplusplus
//
// Problem
//
//There are 50 caps with numbers from 1 to 50. The N people have some of these caps in their collection. One day all of them wear a cap to a party. But all need to look unique so, they decided to wear different numbered caps each. We are given the n number of people and the cap numbers in their collections. Our task is to find the total number of ways in which they can wear the cap so that everyone looks unique.
//In the problem, the first line contains value n i.e. the number of people. The next n lines contain their collection.
//
//Input:
//3
//4 45 10
//25
//45 10
//Output:
//4
//
//All possible ways are (4, 25, 45) , (4, 25, 10), (45, 25, 10), (10, 25, 45).
//
//The output should be in the form of 1000000007 as the number of ways can be a large number.
//
//To solve this problem, a simple solution is to find all possible combinations of people using caps. Starting from the first set and recur the remaining sets. But this solution is not optimized.
//
//A better solution is using Bitmasking and DP by creating a mask of size 210 for 10 persons. And a vector of caps of size 51. Then, we will recur in a number of ways.

#include <bits/stdc++.h>
#include <iterator>
#include <string>

using namespace std;

int solve() {
    std::vector<std::vector<int>> nums;
    std::string line;
    int n;
    cin >> n;
    std::getline(std::cin, line);
    while (std::getline(std::cin, line)) {
        std::istringstream ss(line);
        nums.emplace_back(std::istream_iterator<int>{ss}, std::istream_iterator<int>{});
    }

    cout <<nums[0].size() << "\n";
    cout << nums[0][0] << "\n";
    return 0;
}

int main (int argc, char *argv[])
{
    solve();
    return 0;
}
