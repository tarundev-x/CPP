vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>v;
        int l=0;
        int h=0;
        long long sum=0;
        while(h<n)
        {
            sum+=arr[h];
            
            while(sum>s)
            {
             sum-=arr[l];
             l++;
            }
            if(sum==s)
            {
                v.push_back(l+1);
                v.push_back(h+1);
                break;
            }
            h++;
            
        }
        if(v.size()==0)
        {
            v.push_back(-1);
            return v;
        }
        return v;
  
  -----------------
    Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
