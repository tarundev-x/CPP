 string longestCommonPrefix(vector<string>& strs) {
         string prefix=strs[0];
        if(strs.size()==0) return "";
        
        for(int i=1;i<strs.size();i++)
        {
            while(strs[i].find(prefix)!=0)//
            {
                prefix=prefix.substr(0,prefix.size()-1);
                
            }
            cout<<prefix.size();
        }
       return prefix;
 }
++++++++++++++++++++++++++++++++++++++
  Input: strs = ["flower","flow","flight"]
Output: "fl"
  ++++++++++++++++++++++++++++++++++++++
  Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
