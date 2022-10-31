//97. Sprial traversal 
/*		
		1	2	3	4	5	
		7	8	9	10	11	
		13	14	15	16	17	
		19	20	21	22	23	
		25	26	27	28	29	
		
		output : 1 7 13 19 25 26 27 28 29 23 17 11 5 4 3 2 
					8 14 20 21 22 16 10 9 15
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,m;
	cout<<"Enter dimension of array n x m : ";	cin>>n>>m;
	int a[n][m];
	
	cout<<"enter element in array : \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	
	cout<<"\n Element in array : \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<" \t"<<a[i][j];
		cout<<"\n";
	}
	
	cout<<"\n\n Output : ";
	int minr=0;		//minimum row
	int minc=0;		//minimum col
	int maxr=n-1;	//maximum row
	int maxc=m-1;	//maximum col
	
	int total=n*m;
	
	while(total)
	{
		//top 
		for(int i=minr,j=minc;j<=maxc && total ;j++)
			{
				cout<<" "<<a[i][j];
				total--;
				
			}
			minr++;
			
		//right
		for(int i=minr,j=maxc;i<=maxr && total ;i++)
			{
				cout<<" "<<a[i][j];
				total--;
			
			}
			maxc--;
			
		//bottom
		for(int i=maxr,j=maxc;j>=minc && total ;j--)
			{
				cout<<" "<<a[i][j];
				total--;
			}
			maxr--;
			
		//left
		for(int i=maxr,j=minc;i>=minr && total ;i--)
			{
				cout<<" "<<a[i][j];
				total--;
			}
			minc++;
	}
	
	return 0;
}

