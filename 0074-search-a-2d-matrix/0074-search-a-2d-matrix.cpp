class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m = matrix.size();
        int n = matrix[0].size();
        int j=0;
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]<=target&&matrix[i][n-1]>=target)
            {
                j=i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(matrix[j][i]==target)
            {
                return true;
            }
        }
        return false;
    }
};