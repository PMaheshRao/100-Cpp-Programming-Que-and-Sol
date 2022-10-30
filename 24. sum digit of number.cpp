//24. sum digit of number.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int sum=0,n; 
	cout<<"enter number : ";
	cin>>n;
	
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	cout<<"\nSum = "<<sum;
	return 0;
}

