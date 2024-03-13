/**
 * @param {number} n
 * @return {number}
 */
var pivotInteger = function(n) {
     let leftSum = (n * (n + 1)) / 2;
        let rightSum = 0;

        while (leftSum > rightSum) {
            rightSum += n;
            if (rightSum === leftSum) return n;
            leftSum -= n;
            n--;
        }
        return -1;
};