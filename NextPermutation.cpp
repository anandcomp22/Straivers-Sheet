#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        vector<vector<int>> all;
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        do {
            all.push_back(nums);
            printf("Permutation: ");
            for (int x : nums) cout << x << " ";
            cout<<endl;
        } while (next_permutation(nums.begin(), nums.end()));

        for (int i = 0; i < all.size(); i++) {
            if (all[i] == temp) {
                if (i == all.size() - 1)
                    return all[0];
                return all[i + 1];
            }
        }
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<int> result = sol.nextPermutation(nums);

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
