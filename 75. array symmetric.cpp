//75. check matrix is symmetric or not
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int flag=1;
	int i,j;
	int a[5][5]={{1,2,3,4,5},
				 {2,2,3,4,5},
				 {3,3,3,4,5},
				 {4,7,4,4,5},
				 {5,5,5,5,5}};
		
		for(int i=0;i<5;i++)
		{
			for(int j=i;j<5;j++)
				{
					if(a[i][j]!=a[j][i])
					{	
						flag=0;
						break;
					}
				}
		}
		flag==1?cout<<"Symmetric":cout<<"Asymmetric";
	return 0;
}

