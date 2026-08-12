class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> state;
        int l = 0;
        int res = 0;

        for(int r = 0;r<s.length();r++){
            state[s[r]]++;
            while(state[s[r]]>1){
                state[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
        }
        return res;
    }
};
