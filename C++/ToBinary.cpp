#include<iostream>
#include<string>
using namespace std;

void ToBinary(int num)
{
    int binary[32];
    int i = 0;
    while(num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for(int j = i-1 ; j >= 0 ; j--)
    {
        cout<<binary[j];
    }
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    ToBinary(num);
    return 0;
}