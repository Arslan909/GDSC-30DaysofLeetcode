/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    let res = []
    res.push([1])

    for(let i=1; i<numRows; i++){
        let preRow = res[i-1]
        let currRow =[]
        currRow.push(1)
        
        
        for(let j = 1; j<preRow.length; j++){
            currRow.push(preRow[j - 1] + preRow[j])
        }
        currRow.push(1)
        res.push(currRow)
    }
    return res
};