//38. Perfect or not
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,s=0;
	cout<<"Enter a number : ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		s+=i;
	}
	
	s==n?cout<<s<<" is a perfect number ":cout<<s<<" is not a perfect number ";
	
	return 0;
}

