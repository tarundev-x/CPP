vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    
    set<int>st;
    
    vector<int>v(n,-1);
   
    
    for(int i=0;i<n;i++)
    {
      st.insert(arr[i]);
      auto it=st.find(arr[i]);
      if(it!=st.begin());
      v[i]=*(--it);
       
    }
   
    return v;
