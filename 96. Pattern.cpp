/*96 Print 
			1
		  2 3 2
		3 4 5 4 3
	  4 5 6 7 6 5 4
	5 6 7 8 9 8 7 6 5
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int i,j,s_len=4,c=0;
	cout<<"Pattern : \n";
	for( i=1;i<=9;i+=2)
	{
		c++;
		cout<<"    ";
		for(int s=1;s<=s_len;s++)
			cout<<"  ";
			s_len--;
		
		for( j=c;j<=i;j++)
			cout<<j<<" ";
		for( j=i-1;j>=c;j--)
			cout<<j<<" ";
			cout<<endl;
	}
	return 0;
}

