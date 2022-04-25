 int firstUniqChar(string s) {
   
       map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
          //if(map[s[i]] == 1) return i;
            if(mp.find(s[i])->second==1) return i;
        }
        return -1;
           
    }

/////////////////////////////
387. First Unique Character in a String
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1
