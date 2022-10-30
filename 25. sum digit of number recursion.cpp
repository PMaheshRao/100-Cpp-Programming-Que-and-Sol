//25. sum digit of number recursion.
#include <bits/stdc++.h>

using namespace std;

int sum=0;
int add(int num)
{
	if(num>0)
	{
		sum+=num%10;
		return add(num/10);
	}
	return sum;
}
int main()
{
	int n; 
	cout<<"enter number : ";
	cin>>n;

	cout<<"\nSum = "<<add(n);
	return 0;
}

