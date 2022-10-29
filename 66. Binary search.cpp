#include <bits/stdc++.h>

int binSearch(int a[],int l,int h,int key)
{
	int mid;
	while(l<=h)
	{
		mid=l+h/2;
		if(key>a[mid])
			l=mid+1;
		
		else if(key<a[mid])
			h=mid-1;
		else
			return mid;
	}
	return -1;
}
using namespace std;
int main()
{
	
	int arr[]={85,12,32,43,1,5,66,8,30,15};
	
	sort(arr,arr+10);
	int k; cout<<"enter key : "; cin>>k;
	cout<<"\nindex : "<<binSearch(arr,0,9,k);
	cout<<"\n";
	for(int i:arr)
	cout<<" "<<i;
	return 0;
}

