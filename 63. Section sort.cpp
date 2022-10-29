//63. Section sort
#include <bits/stdc++.h>

void swap(int *p,int *q)
{
	int t=*p;
	*p=*q;
	*q=t;
}
using namespace std;
int main()
{
	int a[]={85,12,32,43,1,5,66,8,30,15}, n=10;
	
	int temp;
	cout<<"input array : ";
	for(int i:a)
	cout<<" "<<i;
	int k;
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[k]>a[j])
				k=j;
		}
			swap(&a[i],&a[k]);
	}
	
	cout<<"\nSorted array : ";
	for(int i:a)
	cout<<" "<<i;
	return 0;
}
