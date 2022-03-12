void preorder(vector<int>v,int s,int e,vector<int>& nums)
{
    
    if(s>e) return;
    int mid=(s+e)/2;
    nums.push_back(v[mid]);
    preorder(v,s,mid-1,nums);
    preorder(v,mid+1,e,nums);
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ans;
        int n=nums.size();
        preorder(nums,0,n-1,ans);
        return ans;
    }
};

------------output-------gfg
  For Input: 
7
1 2 3 4 5 6 7

Your Output: 
4 2 1 3 6 5 7 
