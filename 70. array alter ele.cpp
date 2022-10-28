/*70. Alter each two elements in an array
input : {1,2,3,4,5}
output : {2,1,4,3,5}*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	vector<int> v;	int n , val ;
	cout<<"Enter how many inputs you want : ";
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>val;
		v.push_back(val);
	}
	
	int temp;
	for(int i=0;i<n-1;i=i+2)
	{
		temp=v[i];
		v[i]=v[i+1];
		v[i+1]=temp;
	}
	
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";	
	
	return 0;
}

