class Solution {
public:
    
    int gcd(int a,int b)
    {
        if(a==0)
            return b; 
        return gcd(b%a,a);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int min,max;
        min=nums[0];
        max=nums[nums.size()-1];
        return gcd(max,min);
    }
};
