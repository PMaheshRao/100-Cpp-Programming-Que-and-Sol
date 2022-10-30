//2. WAP to find the smallest number without using comparison.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three number ";
	cin>>a>>b>>c;
	
	int count=0;
	while(a>0 && b>0 && c>0)
	{
		a--;	b--;	c--;
		count++;
	}
	
	cout<<"smallest number : "<<count;
	
	return 0;
}

