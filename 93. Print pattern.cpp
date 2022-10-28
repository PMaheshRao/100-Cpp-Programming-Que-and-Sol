/*93. Print pattern
	*********
	**** ****
	***   ***
	**     **
	*	    *
		
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	cout<<"Pattern : \n";
	for(int i=1;i<=5;i++)
	{
		cout<<"    ";
		for(int j=1;j<=9;j++)
		{
			if(i+j<=6 || i<=j-4)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

