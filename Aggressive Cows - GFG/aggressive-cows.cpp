//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isposibal(vector<int> arr,int di,int cow)
    {
        int countcow =1,lastcow=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]-lastcow>=di)
            {
                countcow++;
                lastcow=arr[i];
            }
        }
        if(countcow>=cow) return true;
        else return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int ans=0;
        int min=stalls[0];
        int max=stalls[stalls.size()-1];
        int low=0,high=(max-min);
        while(low<=high)
        {   int mid=(low+high)/2;
            if(isposibal(stalls,mid,k)==true)
            {
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends