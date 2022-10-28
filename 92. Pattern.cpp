/*92. print pattern 
	
	*
	**
	***
	****
	*****
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=0;i<5;i++)
	{
		cout<<"   ";
		for(int j=0;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}

