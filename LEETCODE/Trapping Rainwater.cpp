 int trap(vector<int>& height) {
         int left=0;
        int high=height.size()-1;
        int leftmax=0;
        int rightmax=0;
        int ans=0;
        while(left<high)
        {
            if(height[left]<height[high])
            {
                height[left]>=leftmax?(leftmax=height[left]):ans+=(leftmax-height[left]);left++;
            }
            else
            {
                height[high]>=rightmax?(rightmax=height[high]):ans+=(rightmax-height[high]);high--;
            }
        }
        return ans;
 }
--------------------------
  Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
