class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i:nums){
            st.insert(i);
        }
        if(nums.size()==st.size())
        return false;
        return true;
    }
};