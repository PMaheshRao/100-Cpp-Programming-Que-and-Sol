//57. Program to add two matrix.
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

int matrix_add(int a[][3],int b[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j]+=b[i][j];
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
					
	int mat2[][3]={{9,8,7},
					{6,5,4},
					{3,2,1}};
					
	cout<<"\n mat1 = \n";	display(mat1,3,3);
	cout<<"\n mat2 = \n";	display(mat2,3,3);				
	matrix_add(mat1,mat2);
	return 0;
}

