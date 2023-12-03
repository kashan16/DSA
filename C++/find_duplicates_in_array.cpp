#include<bits/stdc++.h>
using namespace std;

class dup
{
public:
    vector<int> duplicates(int arr[] , int n)
    {
        sort(arr,arr+n);
        set<int> s;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] == arr[i+1])
            {
                s.insert(arr[i]);
            }

            else continue;
        }
        vector<int> ans;
        ans.assign(s.begin(),s.end());
        if(ans.size() == 0)
        {
            ans.push_back(-1);
        }
        return ans;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ; i < n ; i++) cin>>a[i];

        dup d;

        vector<int> ans = d.duplicates(a,n);
        cout<<endl;
    }
    return 0;
}
