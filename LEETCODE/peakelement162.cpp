class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=1;
        int peak=0;
        int pv=nums[0];
        int n=nums.size();
       // sort(nums.begin(),nums.end());
        while(i<n)
        {
            if(nums[i]>=pv)
            {
                peak=i;
                pv=nums[i];
            }
            i++;
        }
        return peak;
    }
};
