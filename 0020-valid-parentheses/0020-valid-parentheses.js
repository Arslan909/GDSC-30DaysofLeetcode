/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    res = []
    
    map = {
        ")": "(",
        "}":"{",
        "]":"["
    }
    
    for (token of s){
        if(map.hasOwnProperty(token)){
            if (res.length !== 0 && res[res.length-1] === map[token]){
                res.pop()
            }else{
                return false
            }
        }else{
            res.push(token) //meaning token is openeing brackect so just push it to stack
        }
    }
    return res.length === 0;
    
};