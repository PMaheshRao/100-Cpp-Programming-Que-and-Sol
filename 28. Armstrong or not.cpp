//28. Armstrong or not
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int copy,num,c=0,r,sum=0;
	cout<<"Enter a num : "; cin>>num;
	
	copy=num;
	while(num)
	{
		num/=10;
		c++;
	}
	
	 num=copy;
	while(num)
	{
		r=num%10;
		sum+=pow(r,c);
		num/=10;
	}
	
	copy==sum?cout<<sum<<" is an Armstrong number ":cout<<sum<<" is not an Armstrong number ";
	
	return 0;
}

