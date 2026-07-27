class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count  = 0;
        long long prod = 1LL;
        for(auto a: nums){
            if(a==0)
            count++;
            else
            prod*=a;
        }
        vector<int> out;
        
        for(auto a: nums){
            if(a!=0 && count>0)
                out.push_back(0);
            else if(a==0 && count>1){
                out.push_back(0);
            }
            else if(a==0 && count == 1){
                out.push_back((int)prod);
            }
            else 
                out.push_back((int)(prod/a));

        }

        return out;
    }
};
