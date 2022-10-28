//47. Remove element from any position from array 
#include <bits/stdc++.h>
using namespace std;

void display(int a[],int n)
{
	cout<<"\n Array : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
}
void remove(int a[],int n,int pos)
{
	cout<<"\nPosition : "<<pos<<"\tdeleted Element : "<<a[pos];
	for(int i=pos;i<n-1;i++)
		a[i]=a[i+1];
		
		cout<<endl;
	
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=9;
	
	display(a,n);
	remove(a,n,6);
	display(a,n-1);
	
	return 0;
}

