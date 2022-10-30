//9. swap two number without third variable
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a,b;
	cout<<"enter two value \n";

	cin>>a>>b;
	cout<<"a : "<<a <<" b : "<<b;

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"\na : "<<a <<" b : "<<b;


	return 0;
}

