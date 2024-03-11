/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let number=[-1,-1];
    for(let i=0;i<nums.length;i++)
        {
            if(nums[i]==target){
                number[0]=i;
                break;
            }
        }
    for(let i=nums.length-1;i>=0;i--)
        {
            if(nums[i]==target){
                number[1]=i;
                break;
            }
        }
    
    return number;
};