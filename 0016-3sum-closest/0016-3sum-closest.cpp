class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX;
        int n=nums.size();
        int ans=0;
         sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
           int start=i+1;
              int end=n-1;
              
            
              while(start<end)
              {
                  int val=nums[start]+nums[end]+nums[i];
                  if(val==target)
                      return target;
                  else
                  {   if(val<target)
                      {
                         start++;
                       }else{
                      end--;
                        }
                   }
                  

                  if(diff>abs(val-target))
                  {  
                      diff=abs(val-target);
                       ans=val;
                  }
              }
        }
        return ans;
    }
};