#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int killinSpree(long long int n)
    {
        long long int count = 0;
        long long int i = 1;
        while(n > 0)
        {
            if(i*i <= n)
            {
                n = n-(i*i);
                i++;
                count++;
            }
            else break;
        }
        return count;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        Solution s;
        long long int ans = s.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
