//51 . decimal to binary conversion.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,rem;
	double bin;
	int i=1;
	cout<<" Enter number in decimal : ";	cin>>n;
	while(n>0)
	{
		rem=n%2;
		n=n/2;
		bin+=i*rem;
		i=i*10;
	}
	
	cout<<"\n Binary : "<<bin;
	
	
	return 0;
}

