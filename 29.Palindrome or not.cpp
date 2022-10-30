#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,r,rev=0;
	cout<<" Enter a number : "; cin>>n;
	
	int copy=n;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	copy==rev?cout<<rev<<" is an Palindrome number ":cout<<rev<<" is not an Palindrome number ";

	return 0;
}

