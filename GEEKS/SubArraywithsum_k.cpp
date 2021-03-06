class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        unordered_map<int,int>mp;
        int sum=0,count=0;
        for(int i=0;i<N;i++)
        {
            sum+=Arr[i];
            if(sum==k)
                count++;
            if(mp.find(sum-k)!=mp.end())
                count+=mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};
