#include<iostream>
using namespace std;

bool check(int n , int x)
{
    if(n == 0)
    {
        return false;
    }
    if(n == 1)
    {
        return true;
    }
    if(n%x == 0)
    {
        return check(n/x,x);
    }
}
int main()
{
    int n,x;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Enter base : ";
    cin>>x;
    if(check(n,x))
    {
        cout<<n<<" is a power of "<<x<<endl;
    }
    else cout<<n<<" is not a power of "<<x<<endl;
    return 0;
}