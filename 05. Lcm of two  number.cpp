//5. Lcm of two numbers.

#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<"a : "<<a<<" b : "<<b;
	int max=(a>b)?a:b;
	
	while(1)
	{
		if(max%a==0 && max%b==0)
		{
			cout<<"\n LCM  : "<<max;
			break;
		}
		max++;
	}
	
	return 0;
}

