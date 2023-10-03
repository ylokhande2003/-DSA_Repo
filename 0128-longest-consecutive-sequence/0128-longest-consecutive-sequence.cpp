class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.size()==0) return 0;
        
        sort(nums.begin(), nums.end());
        int curseq = 1;
        int maxseq = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1){
                    curseq++;
                }
                else{
                    maxseq = max(maxseq, curseq);
                    curseq = 1;
                }
            }
        }
        return max(maxseq, curseq);

    }
};