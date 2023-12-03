//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(auto c : x)
        {
            if(c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
                if(st.empty()) return 0;
                char v = st.top();
                st.pop();

                if(c == ')' && v != '(')
                {
                    return 0;
                }
                if(c == '}' && v != '{')
                {
                    return 0;
                }
                if(c == ']' && v != '[')
                {
                    return 0;
                }
            }
        }
        if(st.size() == 0) return 1;
        else return 0;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
