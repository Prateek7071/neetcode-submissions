class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {
        let ans={} //hash
        strs.forEach((e)=>{
            let k = e.split('').sort().join()
            if(!ans[k]){
                ans[k] = []
            }
            ans[k].push(e);
        })
        return Object.values(ans)
    }
}
