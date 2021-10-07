  stack<string>s;
       string str="";
       for(int i=0;i<S.length();i++)
       {
           if(S[i]!='.')
           {
               str+=S[i];
           }else
           {
               s.push(str);
               str="";
           }
       }
       s.push(str);
       string result="";
       while(s.size()>0)
       {
           result+=s.top();
          if(s.size()!=1)
          {
               result+=".";
          }
           s.pop();
       }
       return result;
   } 
