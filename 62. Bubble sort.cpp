//62. Bubble sort
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a[]={85,12,32,43,1,5,66,8,30,15}, n=10;
	
	int temp,counter;
	cout<<"input array : ";
	for(int i:a)
	cout<<" "<<i;
	
	for(int i=0;i<n;i++)
	{
		counter=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				counter=1;	
			}
		}
		if(counter==0)
		break;
	}
	
	cout<<"\nSorted array : ";
	for(int i:a)
	cout<<" "<<i;
	return 0;
}

