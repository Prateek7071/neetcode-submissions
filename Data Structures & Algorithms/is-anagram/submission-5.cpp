class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);
        vector <char> sv(s.begin(),s.end());
        vector <char> tv(t.begin(),t.end());
        sort(sv.begin(),sv.end());
        sort(tv.begin(),tv.end());
        
        if(sv == tv )  
        return true;
        return false;

    }
};
