class Solution {
public:
    void helper(vector<int>& nums, vector<int>& subset, int i, int target, vector<vector<int>>& results) {

        int total = 0;
        for (int num : subset) {
            total += num;
        }
        if (total == target) {
            results.push_back(subset);
            return;
        }

        if (i >= nums.size() || total > target) {
            return;
        }

        subset.push_back(nums[i]);
        helper(nums, subset, i, target, results);
        subset.pop_back();

        helper(nums, subset, i + 1, target, results);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> subset;

        vector<vector<int>> results;
        helper(candidates, subset, 0, target, results);
        return results;
    }
};