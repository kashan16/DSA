#include<iostream>
using namespace std;

bool isPowerOFTwo(int n)
{
    if(n == 0)
    {
        return false;
    }
    if(n == 1)
    {
        return true;
    }
    if(n % 2 == 0)
    {
        return isPowerOFTwo(n/2);
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;
    if(isPowerOFTwo(n))
    {
        cout<<n<<" is a power of 2 ";
    }
    else cout<<n<<" is not a power of 2 ";
    return 0;
}