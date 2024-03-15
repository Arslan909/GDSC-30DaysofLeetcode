/**
 * @param {number} n - a positive integer
 * @return {number} - a positive integer
 */
var reverseBits = function(n) {
    let ans = 0;
    for (let i = 0; i <= 31; i++) {
        ans = (ans << 1) | ((n >> i) & 1);
    }
    return ans >>> 0;
};