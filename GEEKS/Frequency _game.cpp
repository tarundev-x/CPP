 map<int,int>mp;
    int mini=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int ans=0;
    for(auto it:mp)
    {
        if(it.second<mini)
        {
            mini=it.second;
        }
        ans=it.first;
    }
    return ans;
