class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()<=1)
        {
            return {nums};
        }
        vector<vector<int>>ve;
        for(int i=0;i<n;i++)
        {
           vector<int>v(nums.begin(),nums.end());
            v.erase(v.begin()+i);
            auto res=permute(v);
            for(int j=0;j<res.size();j++)
            {
                vector<int>_v=res[j];
                _v.insert(_v.begin(),nums[i]);
                ve.push_back(_v);
            }
        }
        
        return ve;
        
    }
};



/////using stl
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        do
        {
          ans.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};

//o(n!)
