//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int N , vector<vector<int>> &Matrix , vector<vector<int>> &dp , int i , int j)
    {
        if(i >= N || j >= N || i < 0 || j < 0)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int a = solve(N,Matrix,dp,i+1,j);
        int b = solve(N,Matrix,dp,i+1,j-1);
        int c = solve(N,Matrix,dp,i+1,j+1);
        dp[i][j] = max(a,max(b,c)) + Matrix[i][j];
        return max(a,max(b,c)) + Matrix[i][j];
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        vector<vector<int>> dp(N+1,vector<int>(N+1,-1));
        int maxi = INT_MIN;
        int i = 0;
        for(int j = 0 ; j < N ; j++)
        {
            int ans = solve(N,Matrix,dp,i,j);
            maxi = max(maxi,ans);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];

        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
