//43. Program to calculate 1*1 + 2*2^2 +....+n*n^n
#include <bits/stdc++.h>

using namespace std;
int main()
{
	cout<<"Enter the value of n : ";
	int n; cin>>n;
	
	double sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i*pow(i,i);
	}
	cout<<"\n sum = "<<sum;
	return 0;
}

