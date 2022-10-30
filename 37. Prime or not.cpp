//37. Prime or not.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,c=0;
	cout<<"Enter a number : ";
	cin>>n;
	
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			c++;
	}
	c>1?cout<<"\n Not prime": cout<<"\n prime";
	
	return 0;
}

