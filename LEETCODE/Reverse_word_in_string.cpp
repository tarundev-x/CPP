class Solution {
public:
    string reverseWords(string s) {
       stringstream  iss(s);
        string word,ans="";
        while(iss>>word)
        {
            ans=word+" "+ans;
        }
        return ans.substr(0,ans.size()-1);
        
    }
};
