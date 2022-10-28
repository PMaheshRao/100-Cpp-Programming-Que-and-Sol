//48. Find largest element in array.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n=15;
	int a[]={98,45,23,65,88,42,0,34,108,770,27,333,43,67,667};
	
	int max=a[0];
	for(int i=1;i<n;i++)
		if(max<a[i])
		max=a[i];
		
	cout<<"Array : ";
	for(int x:a)
	cout<<x<<" ";
	cout<<"\n Max element : "<<max;
	
	return 0;
}

