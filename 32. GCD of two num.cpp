//32. GCD of two num
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a,b,gcd=1;
	cout<<"Enter two number : ";
	cin>>a>>b;
	
	int min= (a>b)?b:a;
	
	for(int i=1;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
		gcd=i;
	}
	cout<<"\n GCD = "<<gcd;
	return 0;
}

