/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
    
    let sum=0;
    for (let i = 0; i < nums.length; i++) {
        sum += nums[i];
    }
    let n = nums.length
    let actualSum = (n*(n+1))/2;
    return actualSum-sum;
};