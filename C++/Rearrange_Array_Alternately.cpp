#include<bits/stdc++.h>
using namespace std;

class Rearrange
{
public:
    void rearrange(long long *arr , int n)
    {
        int r = n-1;
        int l = 0;

        vector<long long> temp1(arr,arr+n);
        vector<long long> temp2(arr,arr+n);

        for(int i = 0 ; i < n ; i++)
        {
            if((i&1) == 0)
            {
                arr[i] = temp2[r];
                r--;
            }
            else
            {
                arr[i] = temp1[l];
                l++;
            }
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        long long arr[n];

        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }

        Rearrange r;

        r.rearrange(arr,n);

        for(int i = 0 ; i < n ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
