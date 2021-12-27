class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        vector<pair<int,int>>vp;
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++) mp[A[i]]++;
        for(int j=0;j<M;j++)
        {
            if(mp.find(X-B[j])!=mp.end())
            {
                vp.push_back(make_pair(X-B[j],B[j]));
            }
        }
        sort(vp.begin(),vp.end());
        return vp;
    }
};
