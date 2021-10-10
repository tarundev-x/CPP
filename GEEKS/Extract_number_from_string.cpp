 long long ExtractNumber(string S)
    {
        //vector<int>v;
        long long ans=0,maxi=INT_MIN;
    for(int i=0;i<S.size();i++)
    {
      if(S[i]>='0' and S[i]<='8')
      {
          int digit= S[i]-'0';
          ans=ans*10+digit;
      }
      else if(S[i]>='a' and S[i]<='z' or S[i]>='A' and S[i]<='Z' or S[i]==' ')
      {
       ans=0;
      }
      else if(S[i]=='9')
      {
          ans=-1;
         
      }
     
      maxi=max(maxi,ans);
    }
    return (maxi==0)?-1:maxi;
    }
