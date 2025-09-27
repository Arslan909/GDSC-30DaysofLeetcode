/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    let visited = []

    for (let i = 0; i < nums.length; i++) {

        let x = target-nums[i];

        let isInVisited = visited.find(obj => obj.ele == x)
        console.log(isInVisited,"isInVisited")

        if (isInVisited) {
            return [isInVisited.idx, i];
        }
        visited.push({ idx: i, ele: nums[i] })
    }
    return [];
};