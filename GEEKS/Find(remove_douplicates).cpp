vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code 
        //sort(arr.begin(),arr.end());
        vector<int>v;
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
           if(st.find(arr[i])==st.end())//if arr element is not present in the st
           {
               st.insert(arr[i]);
               v.push_back(arr[i]);
           }
        }
        
        return v;
    }
