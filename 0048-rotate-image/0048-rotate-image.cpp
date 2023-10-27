class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
    
        for(int j=0;n>1;j++){
            for(int i=0;i<n-1-j;i++){
                swap(matrix[j][j+i],matrix[j+i][n-1]);
                swap(matrix[j][j+i],matrix[n-1][n-1-i]);
                swap(matrix[j][j+i],matrix[n-1-i][j]);
            }
            
            n--;
        }
    }
};