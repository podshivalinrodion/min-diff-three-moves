
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minDifference(vector<int>& nums) {
    int n = nums.size();
    if (n <= 4) return 0;
    sort(nums.begin(), nums.end());
    int ans = INT_MAX;
    for (int i = 0; i <= 3; ++i) {
        int diff = nums[n - 1 - (3 - i)] - nums[i];
        ans = min(ans, diff);
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 5, 0, 10, 14};
    cout << "Minimum difference: " << minDifference(nums) << endl;
    return 0;
}
