//49. Find second largest element in array.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n=15;
	int a[]={330,45,23,65,88,42,0,34,108,770,27,333,43,67,667};
	
	int temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	cout<<"Array : ";
	for(int x:a)
	cout<<x<<" ";
	cout<<"\n Max element : "<<a[n-2];
	
	return 0;
}

