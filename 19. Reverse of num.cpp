//19. reverse a number.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,r,rev=0;
	cout<<" Enter a number : "; cin>>n;
	cout<<"\n Input number : "<<n;
	
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	cout<<"\n Output number : "<<rev;
	
	return 0;
}

