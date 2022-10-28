//55. max in 2d array

#include <bits/stdc++.h>

using namespace std;

int max(int a[][5],int n,int m)
{
	int mx = a[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mx<a[i][j])
			mx=a[i][j];
		}
	}
	return mx;
}
int main()
{
	int a[][5]={ {1 ,2 ,3 ,4 , 5},
				{6 ,7 ,8 ,9 ,10},
				{11,12,13,14,15},
				{16,17,18,19,20},
				{21,22,23,24,25}};
				int n=5,m=5;
	cout<<"\n max : "<<max(a,n,m);
	return 0;
}

