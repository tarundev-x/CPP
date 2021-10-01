class Solution 
{
public:
    int romanToInt(string s) 
    {
       
        int n=s.size();
         vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='I')
            v.push_back(1);
        else if(s[i]=='V')
            v.push_back(5);
        else if(s[i]=='X')
            v.push_back(10);
        else if(s[i]=='L')
            v.push_back(50);
        else if(s[i]=='C')
            v.push_back(100);
        else if(s[i]=='D')
            v.push_back(500);
        else if(s[i]=='M')
            v.push_back(1000);
        else
            return 0;
    }
    int j=0;
    int sum=0;
    for(int j=0;j<v.size();j++)
   {
     if(v[j]<v[j+1])
      {
         sum=sum+v[j+1]-v[j];
         //j++;
      }
    else
       {
         sum=sum+v[j];
       }
    }
        
   
    return sum;
  }
        
   // }
};
