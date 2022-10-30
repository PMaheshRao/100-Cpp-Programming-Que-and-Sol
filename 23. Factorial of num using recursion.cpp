//23. Factorial of num using recursion
#include <bits/stdc++.h>

using namespace std;
int f=1;
int fact(int n)
{
	if(n)
	return f*fact(n-1);
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

