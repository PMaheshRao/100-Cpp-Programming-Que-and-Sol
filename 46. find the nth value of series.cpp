//46. find the nth value of series 1 2 5 26 677... (recursive + iterative).

#include <bits/stdc++.h>
using namespace std;
int sol(int n)
{
	int i=1,s=0;
	cout<<"\n series : ";
	while(n--)
	{
		s=pow(s,2)+1;
		cout<<s<<" ";
	}
	return s;	
}

int main()
{
	cout<<" Enter position : ";
	int n;	cin>>n;
	cout<<"\n nth element : "<<sol(n);
	return 0;
}

