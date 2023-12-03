#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

class Bubble
{
public :
    void bubbleSort(int arr[] , int n)
    {
       for(int i = 0 ; i < n ; i++)
       {
           for(int j = i+1 ; j < n ; j++)
           {
               if(arr[i] > arr[j])
               {
                   int temp = arr[i];
                   arr[i] = arr[j];
                   arr[j] = temp;
               }
           }
       }
    }
};

void printArray(int arr[] , int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int arr[1000] , n , T , i;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        Bubble b;
        b.bubbleSort(arr,n);
        printArray(arr,n);
    }
    return 0;
}
