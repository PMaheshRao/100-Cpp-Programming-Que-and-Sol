//20. Reverse using recursion
#include <bits/stdc++.h>

int rem=0,sum=0;
int rev_num(int n)
{

	if(n){
		rem=n%10;
		sum=sum*10+rem;
		rev_num(n/10);
	}
	else
		return sum;
	return sum;
}

using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;	
	
	cout<<"\n Input number : "<<n;
	cout<<"\n Output number : "<<rev_num(n);
	
	return 0;
}

