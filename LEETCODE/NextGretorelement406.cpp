class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int>v;
      stack<int>st;
        st.push(-1);
       unordered_map<int,int>mp;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(st.top()!=-1 && nums2[i]>st.top())
            {
                st.pop();
            }
            mp.insert({nums2[i],st.top()});
            st.push(nums2[i]);
        }
        for(auto it:nums1)
        {
            v.push_back(mp[it]);
        }
        return v;
    }
};
