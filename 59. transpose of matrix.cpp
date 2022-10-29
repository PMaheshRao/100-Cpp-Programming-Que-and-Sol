//59. Program to transpose a matrix
#include <bits/stdc++.h>
using namespace std;

void display(int a[][3],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
}

int matrix_trans(int a[][3])
{
	int temp;
	for(int i=0;i<3;i++)
	{
		for(int j=i;j<3;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;	
		}
	}
		cout<<"\n Output array : \n";
		display(a,3,3);
	
}
int main()
{
	int mat1[][3]={{1,2,3},
					{4,5,6},
					{7,8,9}};
					
	cout<<"\n mat1 = \n";	display(mat1,3,3);
	matrix_trans(mat1);
	
	return 0;
}

