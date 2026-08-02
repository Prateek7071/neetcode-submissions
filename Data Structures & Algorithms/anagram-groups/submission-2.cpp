class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> grp;
         for(const string& s: strs){
            string key = getSig(s);
            grp[key].push_back(s);
         }
         vector<vector<string>> result;
         for(auto &pair: grp){
            result.push_back(move(pair.second));
         }
         return result;
    }
private:
    string getSig(const string& s){
        int count[26] = {0};
        for(char c : s){
            count[c-'a']++;
        }
        string sig;
        sig.reserve(52);

        for(int i = 0;i<26;i++){
            sig+= char('a'+count[i]);
        }
        return sig;
    }
};