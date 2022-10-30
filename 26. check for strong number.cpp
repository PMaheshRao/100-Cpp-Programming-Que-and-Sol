//26. Check for strong number 1!+4!+5! =145
#include <bits/stdc++.h>

using namespace std;
int fact(int n)
{
	int f=1;
	while(n>0)
	{
		f*=n;
		n--;
	}
	return f;
}
int main()
{
	int num,sum=0;
	cout<<"enter number : "; cin>>num;
	int copy=num;
	while(num>0)
	{
		sum+=fact(num%10);
		num/=10;
	}
	copy==sum?cout<<sum<<" is a strong number ":cout<<sum<<" is not a strong number ";
	
	return 0;
}

