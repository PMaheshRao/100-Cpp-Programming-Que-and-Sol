/* 98.pattern

		1 2 3 4 5 6 7 8 9,10,11,12,13,14,15,16,17
	1	* * * * * * * * * *  *  *  *  *  *  *  * 
	2	  * * * * * * *   *  *  *  *  *  *  *		  
	3	    * * * * *        *  *  *  *  * 			
	4		  * * *             *  *  * 
	5		    * * * * * *  *  *  *
	6			  * * * * *  *  * 
	7			    * * * *  *
	8				  * * * 
	9					*
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	for(int i=1;i<=9;i++)
	{
		cout<<"    ";
		for(int j=1;j<=17;j++)
		{
			if((i==2&&j==9) || (i==3 && (j>=8 && j<=10)) || ( i==4 && ( j>=7 && j<=11 )) )
				{
					cout<<" ";
				}	
			else
			{
				if(i<=j&&i+j<=18)
				cout<<"*";
				else
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}

