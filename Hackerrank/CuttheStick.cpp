
vector<int> cutTheSticks(vector<int> arr) {
    vector<int>v;
    int count=0;
    int z=0;
   // sort(arr.begin(),arr.end());
    while(z<arr.size())
    {
       v.push_back(arr.size()-z);
       int mini=1001;
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]>0 &&arr[i]<mini)
           {
               mini=arr[i];
           }
       }
       for(int i=0;i<arr.size();i++)
       {
           arr[i]=arr[i]-mini;
           if(arr[i]==0) 
                z++;
       }
        
    }
return v;
