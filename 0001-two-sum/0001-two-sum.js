/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    let sorted = [...nums].sort((a, b) => { return a - b })

    let l = 0
    let r = nums.length - 1

    while (l < r) {
        let sum = sorted[l] + sorted[r]
        if (sum == target) {
            let index1 = nums.indexOf(sorted[l]);
            let index2 = nums.lastIndexOf(sorted[r]);
            return [index1, index2];
        }

        if (sum > target) r--
        if (sum < target) l++
    }
    return []
    
    
    // hashmap is more efficeint use that next time
};