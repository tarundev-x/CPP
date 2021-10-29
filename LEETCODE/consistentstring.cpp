class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         int iCount = 0;
        
        for (string word: words)
        {
            bool bConsistent = true;
            
            for(char c: word)
            {
                if (allowed.find(c) ==string::npos)
                {
                    bConsistent = false;
                    break;
                }
            }
            
            if(bConsistent)
                ++iCount;
        }
        
        return iCount;
    }
};
