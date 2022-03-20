string chooseandswap(string a){
        // Code Here
          vector<bool>fre(26,false);
       for(int i=0;i<a.size();i++)
       {
           fre[a[i]-'a']=true;
       }
       
    char ch='-';
    char ch1='-';
    int s=0;
    for(int i=0;i<a.size();i++)
    {
       for(int j=0;j<26;j++)
       {
           if(fre[j] and ((j+'a')==a[i]))
           {
               fre[j]=false;
           }
        if(fre[j] and ((j+'a')<a[i]))
           {
               ch=j+'a';
                ch1=a[i];
                s=1;
                break;
           }
       }
       if(s) break;
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==ch1)
        {
            a[i]=ch;
        }
        else if(a[i]==ch)
        {
            a[i]=ch1;
        }
    }
    return a;
    }
