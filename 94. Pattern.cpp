/*94. Print
		
		1
		12
		123
		1234
		
*/ 
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int c=1;
	for(int i=0;i<5;i++)
	{
		c=1;
		cout<<"   ";
		for(int j=0;j<=i;j++)
		cout<<c++;
		cout<<endl;
	}
	return 0;
}

