/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {
    let res = []
    intervals.sort((a, b) => a[0] - b[0]);
    res.push(intervals[0])

    for(let i=1; i<intervals.length; i++){
        temp= res[res.length-1]

        if(intervals[i][0] <= temp[1]){
            temp[1] = Math.max(intervals[i][1], temp[1])
        }else{
            res.push(intervals[i])
        }
    }
    
    return res;
    
};