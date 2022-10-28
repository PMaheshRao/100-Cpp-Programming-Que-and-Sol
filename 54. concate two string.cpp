//54. program to concate two string.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	char str_1[20],str_2[20];
	cout<<"Enter two string :\n";
	gets(str_1);gets(str_2);
	
	cout<<"\n  Input str1: "<<str_1<<"\t str2: "<<str_2;
	
	int len=strlen(str_1);
	for(int i=0;str_2[i]!='\0';i++)
		str_1[len++]=str_2[i];
	
	cout<<"\n Output str1: "<<str_1;
	return 0;
}

/*approach 1:
int main()
{
	char str_1[20],str_2[20];
	cout<<"Enter two string :\n";
	gets(str_1);gets(str_2);
	
	cout<<"\n  Input str1: "<<str_1<<"\t str2: "<<str_2;

	strcat(str_1,str_2);

		cout<<"\n Output str1: "<<str_1;
	return 0;
}*/


