class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row,col;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    col.push_back(i);
                    row.push_back(j);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(col.end()!=find(col.begin(),col.end(),i))
                {
                    matrix[i][j]=0;
                }
                 if(row.end()!=find(row.begin(),row.end(),j))
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};