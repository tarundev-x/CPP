 vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        vector<int>v(n,-1);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && mp[arr[st.top()]]<mp[arr[i]])
            {
                v[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
            
            
        }
       return v; 
    }
