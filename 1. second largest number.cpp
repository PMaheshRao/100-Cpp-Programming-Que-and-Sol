//1. Find second largest number without using array.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three number : ";
	cin>>a>>b>>c;
	
	if((a>b && a<c)||(a>c && a<b)) cout<<"second largest number is : "<<a;
	
	else if((b>a && b<c)||(b>c && b<a)) cout<<"second largest number is : "<<b;
	
	else cout<<"second largest number is : "<<c;	

	return 0;
}

