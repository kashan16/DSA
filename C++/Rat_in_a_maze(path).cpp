//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void maze(int row , int col , vector<string> &ans , vector<vector<int>> &m , int n , vector<vector<int>> &vis , string s)
    {
        if(row == n - 1 && col == n - 1)
        {
            ans.push_back(s);
            return;
        }
        vis[row][col] = 1;
        if((row+1 < n && row+1 >= 0)&&
            (col < n && col >= 0)&&
            (m[row+1][col] == 1)&&
            (!vis[row+1][col]))
            {
                s+="D";
                maze(row+1,col,ans,m,n,vis,s);
                if(!s.empty())
                s.pop_back();
            }
            if((row < n && row >= 0)&&
                (col+1 < n && col+1 >= 0)&&
                (m[row][col+1] == 1)&&
                (!vis[row][col+1]))
                {
                    s+="R";
                    maze(row,col+1,ans,m,n,vis,s);
                    if(!s.empty())
                    s.pop_back();
                }
            if((row-1 < n && row-1 >= 0)&&
                (col < n && col >= 0)&&
                (m[row-1][col] == 1)&&
                (!vis[row-1][col]))
                {
                    s+="U";
                    maze(row-1,col,ans,m,n,vis,s);
                    if(!s.empty())
                    s.pop_back();
                }
            if((row < n && row >= 0)&&
                (col-1 < n && col-1 >= 0)&&
                (m[row][col-1] == 1)&&
                (!vis[row][col-1]))
                {
                    s+="L";
                    maze(row,col-1,ans,m,n,vis,s);
                    if(!s.empty())
                    s.pop_back();
                }
                vis[row][col] = 0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;
        string s;
        if(m[0][0] == 0 || m[n-1][n-1] == 0)
        {
            return {"-1"};
        }
        vector<vector<int>> visited(n,vector<int>(n,0));
        maze(0,0,ans,m,n,visited,s);
        sort(ans.begin(),ans.end());
        return ans;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
