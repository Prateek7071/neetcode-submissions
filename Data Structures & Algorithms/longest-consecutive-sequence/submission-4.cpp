class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> h;
        for(const auto &a: nums)
            h.insert(a);
        int longest = 0;
        for(int i=0;i< nums.size();i++){
            if(h.find(nums[i]-1)==h.end()){
                int currlongest = 1;
                int currE = nums[i];
                while(h.find(currE+1)!= h.end()){
                    currlongest++;
                    currE ++;
                }
            longest= max(currlongest, longest);
            }
        }
        return longest;
    }
};
