class Solution{
    public:
    
    string modify (string s)
    {
        string ss;
      for(char &c:s)
      {
          if(isupper(s[0])) c=toupper(c);
          else c=tolower(c);
      }
      return s;
        // your code here
    }
};
