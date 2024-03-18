/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    // let map = []
    // for(num of nums){
    //     if(map.indexOf(num) !== -1){
    //         return true
    //     }else{
    //         map.push(num)
    //     }
    // }
    // return false
    
    let set = new Set()
    for(num of nums){
        if(set.has(num)){
            return true
        }else{
            set.add(num)
        }
    }
    return false
};