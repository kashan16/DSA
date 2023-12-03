#include<iostream>
using namespace std;

bool IsDivisible(int a , int b)
{
    if(b == 0)
    {
        cout << "Unable to devide by 0";
    }
    if(a%b == 0)
    {
        return true;
    }
    else return false;
}

int main()
{
    int a,b;
    cout << "Enter : ";
    cin >> a >> b;
    if(IsDivisible(a,b))
    {
        cout << a << " is divisible by " << b;
    }
    else cout << a << " is not divisible by " << b;
    return 0;
}