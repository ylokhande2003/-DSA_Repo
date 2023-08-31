class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN;
        int left=0,right=height.size()-1;
        while(left<=right)
        {
            int dis=right-left;
            int smaller=min(height[left],height[right]);
            ans=max(ans,(smaller*dis));
            if(height[left]<height[right])
            {
                left++;
            }else{
                right--;
            }
        }
        
        return ans; 
    }
};