/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function (items, ruleKey, ruleValue) {

    const ruleIndexMap = {
        type: 0,
        color: 1,
        name: 2
    };

    const index = ruleIndexMap[ruleKey];
    let count = 0;
    for (const item of items) {
        if (item[index] === ruleValue) {
            count++;
        }
    }
    return count;
};