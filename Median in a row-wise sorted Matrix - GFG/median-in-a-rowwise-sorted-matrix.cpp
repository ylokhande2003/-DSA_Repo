//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here   
        int l=0,r=(int)1e9;
        int total=R*C;
        int median=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int sum=0;
        for(int i=0;i<R;i++)
        {
            int ub=upper_bound(matrix[i].begin(), matrix[i].end(), mid)-matrix[i].begin();
             sum += ub;
        }
        if(sum>total/2)
        {
            median=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
        }
        
        return median;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends