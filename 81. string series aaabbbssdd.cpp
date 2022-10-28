//81. print ddddcccbbbbbaa -> 4d3c5b2a
#include <bits/stdc++.h>

using namespace std;
int main()
{
	char str[200];
	cout<<"Give input : ";
	cin>>str;

	char ch=str[0];	
	int count=0;
	for(int i=0 ; str[i]!='\0' ; i++)
	{	
		count++;
		if(ch!=str[i+1])
		{
			cout<<count<<str[i];
			ch=str[i+1];
			count=0;
		}
	}
	
	return 0;
}

