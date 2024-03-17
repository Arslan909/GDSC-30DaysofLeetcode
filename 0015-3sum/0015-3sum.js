/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    nums.sort((a,b)=>{return a-b});
    let res = []
    
    for(let i=0;i<nums.length; i++){
        
        if(i>0 && nums[i] == nums[i-1]){
            continue
        }
        // [-4 -1,-1, 0, 1, 2,]
        let l = i+1;
        let r = nums.length-1
        
        while(l<r){
            let sum = nums[i] +nums[l] +nums[r]
            
            if( sum >0){
                r -= 1
            }else if( sum < 0){
                l += 1
            }
            else{
                res.push( [nums[i], nums[l], nums[r]] )
                l += 1
                r-= 1
                while(nums[l] === nums[l-1] && l<r){
                    l+=1
                }
                while(nums[r] === nums[r+1] && l<r){
                    r-=1
                }
                
                
            }
        }
        
    }
    
    return res
};