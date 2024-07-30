class Solution {
public:
    void helper(vector<int> nums, vector<int> subset, int i, vector<vector<int>> &results)
    {
        if(i == nums.size()){
            results.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        helper(nums, subset, i+1, results);
        subset.pop_back();

        while (i+1 < nums.size() && nums[i] == nums[i+1]){ 
            i++;
        }
        helper(nums, subset, i+1, results);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> results;
        vector<int> subset;
        sort(nums.begin(), nums.end());

        helper(nums, subset, 0, results);
        return results;
    }
};