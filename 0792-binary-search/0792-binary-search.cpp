class Solution {
public:
    int resusionHelper(vector<int>& nums, int target,int left,int right){

        if(left > right){
            return -1;
        }
        int mid = left + (right - left) / 2;

        if(nums[mid] ==  target){
            return mid;
        }

        if(target< nums[mid]){
            return resusionHelper(nums,target,left,mid-1);
            // right = mid-1;
        }else{
            // left = mid+1;
            return resusionHelper(nums,target,mid+1,right);
        }
        return -1;
        

    }
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        
        return resusionHelper(nums,target,left,right);
    }
};