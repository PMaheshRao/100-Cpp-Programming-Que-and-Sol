//43. Program to calculate 1*1! + 2*2! +....+n*n!
#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
	int f=1;
	while(n>1)
	{
		f*=n;
		n--;
	}
	cout<<"f = "<<f;
	return f;
}
int main()
{
	cout<<"Enter the value of n : ";
	int n; cin>>n;
	
	double sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i*fact(i);
	}
	cout<<"\n sum = "<<sum;
	return 0;
}

