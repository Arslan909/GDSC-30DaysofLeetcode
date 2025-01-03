class Solution {
public:
    void swap(int &n1, int &n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int i=0;

        while(i <= right){
            if(nums[i] == 1){
                i++;
            }
            else if(nums[i] == 2){
                swap(nums[i], nums[right]);
                right--;
            }
            else if(nums[i] == 0){
                swap(nums[i], nums[left]);
                left++;
                i++;
            }
        }
    }
};