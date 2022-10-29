//67. findout largest word in string
#include <bits/stdc++.h>

using namespace std;
int main()
{
	char str[100],word[20];
	cout<<"Enter string : ";
	gets(str);
	
	int len=strlen(str),s_index,e_index,count=0,prev=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]!=' ')
			count++;
		else if(str[i]==' ' || i==len-1)
		{
			if(prev<count)
			{
				prev=count;
				e_index=i;
				s_index=i-count;
			}
			count=0;
		}
	}
	cout<<"\n String : "<<str;
	
	cout<<"\n longest string size : \t"<<prev;
	cout<<"\n longest string word : \t";
	
	while(s_index<=e_index)
	{
		cout<<str[s_index++];
	}
	
		 
	return 0;
}

