class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res =0, max = 0;
        int i = 0, j = heights.size()-1;
        while(i<j){
            int l = heights[i]>heights[j]?heights[j]:heights[i];
            max = l * (j-i);
            if(max>res) res = max ;
            if(heights[i]<heights[j]) i++;
            else j--;
        }
        return res;
    }

    
};
