class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
        string encoded_string="";
        for(const string &s:strs){
            encoded_string+=to_string(s.length())+"#"+s;        
        }
        return encoded_string;
    }

    vector<string> decode(string s) {\
        vector<string> decoded_string;
        if(s.empty()){
            return decoded_string;
        } 
        int i =0;
        while(i<s.size()){
            int j = i;
            while(s[j]!='#') j++;
            int l = stoi(s.substr(i,j-i));
            i=j+1;
            decoded_string.push_back(s.substr(i,l));
            i+=l;
        }        
        return decoded_string;
    }
};
