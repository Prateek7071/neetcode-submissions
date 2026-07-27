class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int > freq;
        for(int x: nums)
            freq[x]++;
        vector<vector<int>> buckets(nums.size()+1);
        for(auto &[num , count]: freq){
            buckets[count].push_back(num);
        }
        vector<int> res;
        for(int i=buckets.size()-1;i>=0 && res.size()<k;i--){
            for(int num: buckets[i]){
                res.push_back(num);
            }if(res.size()==k) 
            break;
        }        
    return res;
    }

};
