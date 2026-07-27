class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let set = new Set()
        let ans = []
        for(let i = 0;i<nums.length;i++){
            let curr = nums[i]
            let compli = target - curr
            if(set.has(compli)){
                ans.push(i)
                ans.push(nums.indexOf(compli))
                return ans
            }
            else{
                set.add(curr)
            }
        }

    }
}
