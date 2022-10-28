//52. copy one string to another string without using strcpy(). 
#include <bits/stdc++.h>

using namespace std;
int main()
{
	char str[]="Money can't buy happiness , but it can buy crazy as happiness";
	cout<<" First string : "<<str;
	
	int len=strlen(str);
	
	char cp_str[len];
	for(int i=0;i<len;i++)
		cp_str[i]=str[i];
	
	cout<<"\n Second string : "<<cp_str;
	
	return 0;
}

