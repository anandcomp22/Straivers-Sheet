#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            int curr = 0;
            for(int j = i; j<nums.size(); j++) {
                curr += nums[j];
                max_sum = max(max_sum, curr);
            }
        }
        return max_sum;
    }
};

int main() {
    Solution s;
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << s.maxSubArray(nums) << endl;
    return 0;
}