/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
    if (x < 0) 
        return false;
    if(x === 0)
        return true; // bcoz i dont want to change temp -ignore this for sanity
    let temp = '';
    let org = x;
    while (x !== 0) {
        temp += String(x % 10)
        x = Math.floor(x / 10);
    }
    if (org === parseInt(temp)) {
        return true;
    }
    return false;


};