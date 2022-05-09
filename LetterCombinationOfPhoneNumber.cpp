class Solution {
public:
    void helper(int i,string &digits,string temp,vector<string>&mp, vector<string>&result){
        
        if(i>=digits.length()){
            result.push_back(temp);
            return;
        }
        for(int j=0;j<mp[digits[i]-'2'].size();j++){                                      //most important step is conversion
            string searched=mp[digits[i]-'2'];
            temp.push_back(searched[j]);
            helper(i+1,digits,temp,mp,result);
            temp.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string>mp={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        vector<string>result;
        int i=0;
        helper(i,digits,temp,mp,result);
        return result;
    }
};
