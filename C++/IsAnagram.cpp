#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Anagram
{
	public:
		bool isAnagram(string a , string b)
		{
			sort(a.begin(),a.end());
			sort(b.begin(),b.end());
			if(a == b)
			{
				return true;
			}
			else return false;
		}
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string c,d;
		cin>>c>>d;
		Anagram a;
		if(a.isAnagram(c,d))
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
