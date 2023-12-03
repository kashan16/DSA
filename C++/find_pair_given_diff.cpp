#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool findPair(int a[] , int n , int diff)
{
    sort(a,a+n);
    int i = 0 , j = 1;

    while(j < n)
    {
        int currDiff = a[j] - a[i];
        if(currDiff == diff && i != j)
        {
            return true;
        }
        if(currDiff < diff)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i = 0 ; i < l ; i++)
        cin>>arr[i];

        if(findPair(arr,l,n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
