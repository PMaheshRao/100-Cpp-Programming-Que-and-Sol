//73. calculate total sum of 2d array.
#include <bits/stdc++.h>

using namespace std;

int add(int a[][5],int n,int m)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			s=s+a[i][j];
		}
	}
	return s;
}
int main()
{
	int i,j;
	int a[6][5]={{1,2,3,4,5},
				 {1,2,3,4,5},
				 {1,2,3,4,5},
				 {1,2,3,4,5},
				 {1,2,3,4,5},
				 {1,2,3,4,5}};
	
	cout<<"enter val one by one : \n";
/*	for(i=0;i<6;i++)		//for array input
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	*/
	 
	cout<<"\n sum = "<<add(a,6,5);
	return 0;
}

