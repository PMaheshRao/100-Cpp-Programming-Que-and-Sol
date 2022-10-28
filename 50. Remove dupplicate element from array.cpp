//50. Remove dupplicate element from array.
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int hash[400]={0};
	
	int n=15;
	int a[]={45,45,245,245,88,92,0,245,108,0,27,333,43,27,27};
	
	cout<<"\n Array :";
	for(int i:a)
		cout<<" "<<i;
	
	for(int i=0;i<n;i++)
	{
		hash[a[i]]=1;
	}
	
	cout<<"\n Array :";
	for(int i=0;i<400;i++)
		{
			if(hash[i]==1)
			cout<<" "<<i;	
		}
	
	return 0;
}

