//fibonnaci series
#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
	int a=0,b=1,c;
	
	cout<<"Fibo Series : ";
	while(n--)
	{
		c=a+b;
		cout<<a<<" ";
		a=b;
		b=c;
		
	}
}

int main()
{
	int num;
	cout<<"How many element you want to print : ";
	cin>>num;
	
	fibo(num);
	return 0;
}

