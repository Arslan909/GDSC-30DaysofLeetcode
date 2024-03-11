class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        
        int product=1;
        for(int i=0; i<nums.size(); i++){
            product *= nums[i];
            res.push_back(product);
        }

        int temp =1;
        for(int i=res.size()-1; i>0; i--){
            res[i] = temp * res[i-1];
            temp *= nums[i];
        }
        res[0] = temp;

        
        return res;
        
    }
};