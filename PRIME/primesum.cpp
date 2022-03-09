class Solution {
  public:
    string isSumOfTwo(int N){
          if(N<4) return "No";
        if(N==4) return "Yes";
        int arr[N]={};
        for(int i=2;i<=N;i++)
        {
            if(arr[i]==0)
            {
                for(int j=i*i;j<=N;j+=i)
                {
                    arr[j]=1;
                }
            }
        }
      
        vector<int>v;
        for(int i=2;i<=N;i++)
        {
            if(arr[i]==0)
            {
                v.push_back(i);
            }
            
        }
        int l=0;
        bool f=false;
        int h=v.size()-1;
        while(l<h)
        {
           if(v[l]+v[h]==N)
           {
               f=true;
               break;
           }
           if((v[l]+v[h])<N)
           {
               l++;
           }
           else
           {
               h--;
           }
        }
        if(f) return "Yes";
        else return "No";
