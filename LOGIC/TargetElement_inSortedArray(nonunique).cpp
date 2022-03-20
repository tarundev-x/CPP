 int lower(vector<int> & nums,int &target,int &first)
    {
        int l=0;
        int h=nums.size()-1;
     
      
       while(l<=h)
       {
           int mid=(l+h)/2;
           if(nums[mid]==target)
           {
               first=mid;
               h=mid-1;
           }
           else if(nums[mid]>target)
           {
               h=mid-1;
           }
           else
           {
               l=mid+1;
           }
       }
       return first;
        
    }
     int higher(vector<int> & nums,int target,int &high)
    {
        int l=0;
        int h=nums.size()-1;
     
       while(l<=h)
       {
           int mid=(l+h)/2;
           if(nums[mid]==target)
           {
               high=mid;
               l=mid+1;
           }
           else if(nums[mid]>target)
           {
               h=mid-1;
           }
           else
           {
               l=mid+1;
           }
       }
       return high;
        
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        int first=-1;
        int high=-1;
       int x=  lower(nums,target,first);
        int y=higher(nums,target,high);
        if(x==y && (x!=-1 || y!=-1) )
        {
            v.push_back(x);
            return v;
        }
        else if(x==-1 && y==-1)
        {
            return v;
        }
       else
       {
         for(int i=x;i<=y;i++)
         {
             v.push_back(i);
         }

       }
      return v;
        
        
    }

--------------------------------
  Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.
