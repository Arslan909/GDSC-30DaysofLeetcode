/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function(intervals, newInterval) {
    let res = []

    for(let i = 0; i< intervals.length; i++){
        if(newInterval[1] < intervals[i][0]){
            res.push(newInterval)
            // while(i<intervals.length){
            //     res.push(intervals[i])
            //     i++
            // }
            
            res.push(...intervals.slice(i,intervals.length))
            return res
        }
        else if(newInterval[0] > intervals[i][1]){
            res.push(intervals[i])
        }else{
            newInterval = [Math.min(newInterval[0], intervals[i][0]),
                           Math.max(newInterval[1], intervals[i][1])]
        }
    }
    res.push(newInterval)
    return res
    
    
};