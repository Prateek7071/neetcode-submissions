class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int res =0;
       int max = 0;
       for(auto &a: nums){
            if(a==1)
                max++;
            else
                max=0;
            if(max>res) res = max;
       }
       return res;
    }
};