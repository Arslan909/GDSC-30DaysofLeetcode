class Solution {
public:
    void helper(vector<int>& nums, vector<int>& subset, int i, int target,
                vector<vector<int>>& results) {

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
        helper(nums, subset, i+1, target, results);
        subset.pop_back();
        while(i + 1 < nums.size() && nums[i]==nums[i+1]){
            i++;
        }

        helper(nums, subset, i + 1, target, results);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> subset;
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> results;
        helper(candidates, subset, 0, target, results);
        return results;
    }
};