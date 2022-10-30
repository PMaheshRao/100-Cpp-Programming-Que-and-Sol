//22. Factorial of num
#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
	int f=1;
	while(n>0)
	{
		f*=n;
		n--;
	}
	return f;
}
int main()
{
	int num;
	cout<<"enter number : ";
	cin>>num;
	cout<<"factorial = "<<fact(num);
	return 0;
}

