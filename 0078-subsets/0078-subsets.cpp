class Solution {
public:
    void helper(vector<int> nums, vector<int> subset, int i,
                vector<vector<int>>& results) {

        if (i == nums.size()) {
            results.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(nums, subset, i + 1, results);
        
        subset.pop_back();
        helper(nums, subset, i + 1, results);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> results;
        vector<int> subset;

        helper(nums, subset, 0, results);
        return results;
    }
};