//65. Linear search
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int arr[]={85,12,32,43,1,5,66,8,30,15}, n=10, num;
	cout<<"Enter searched element : ";
	cin>>num;
	
	int i;
	for(i=0;i<n;i++)
	{
		if(num==arr[i])
			break;
	}
	i<n?cout<<"\nFound at index : "<<i:cout<<"\nNot Found !!!";
	
	cout<<endl;
	for(int i:arr)cout<<" "<<i;  
	
	return 0;
}

