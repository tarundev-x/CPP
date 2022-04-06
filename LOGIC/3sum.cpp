 vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        
       vector<vector<int>>ans;
        if(n<3) return ans;
        
        for(int i=0;i<n-2;i++)
        {
            if(i==0 ||( i>0 && (nums[i]!=nums[i-1])))
            {
                int l=i+1,h=n-1;
                int sum=0-nums[i];
                
                while(l<h)
                {
                    if((nums[l]+nums[h])==sum)
                    {
                        //vector<int>v;
                        ans.push_back({nums[i],nums[l],nums[h]});
                        
                      
                        
                        while(l<h && nums[l]==nums[l+1]) l++;
                        
                        while(l<h && nums[h]==nums[h-1]) h--;
                        
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h]<sum) l++;
                    else h--;
                }
     
            }
        }
  
        return ans;
 }


.........................
  Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
