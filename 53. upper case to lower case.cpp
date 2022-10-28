//53. program to convert upper case to lower case
#include <bits/stdc++.h>

using namespace std;
int main()
{
	char str[20];
	cout<<"enter string : \n";
	gets(str);
	cout<<"\n Mix case Input : "<<str;
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
			str[i]+=32;
	}
	cout<<"\n Lower case Output : "<<str;
	return 0;
}


/*approach 1:
int main()
{
	char str[20];
	gets(str);
	cout<<"\n Mix case Input : "<<str;
	strlwr(str);
	cout<<"\n Lower case Output : "<<str;
	return 0;
}
*/
