/*90. Print pattern
				*
			*		*
		*		*		*
	*		*		*		*
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int s=8-i;s>=1;s--)
			cout<<" ";
			
		for(int j=i;j>=1;j--)
			cout<<"* ";
			cout<<endl;
	} 
	return 0;
}

