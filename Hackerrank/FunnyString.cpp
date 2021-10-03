reverse(s.begin(),s.end());
    int flag=0;
    for(int i=0,j=s.size()-1;i<s.size()-1,j>0;i++,j--)
    {
       if(abs(s[i]-s[i+1])!=abs(s[j]-s[j-1]))
       {
           return "Not Funny";
       }
    }
    return "Funny";
