//56. Program to find no. word digit and vowel in string. 
#include <bits/stdc++.h>

using namespace std;
int main()
{
	char str[50];
	cout<<"Enter string : "; 
	gets(str);
	
	int word=1, vowel=0, digit=0;
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]!=' ')
			word++;
		
		else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
		||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			vowel++;
		
		else if(str[i]>='0'&&str[i]<='9')
			digit++;
	}
	
	cout<<"\n String : "<<str;
	cout<<"\n word : "<<word<<"\t vowel : "<<vowel<<"\t digit : "<<digit;

	return 0;
}

