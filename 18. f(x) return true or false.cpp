//18. write a fun() that return true if b^a == c of false 
#include <bits/stdc++.h>

using namespace std;

bool fun(int a, int b,int c)
{
		if(pow(b,a)==c)
			return true;
			return false;
}
int main()
{
	int p,q,r;
	cout<<"Enter p ,q ,r value : ";
	cin>>p>>q>>r;
	cout<<"output : "<<fun(p,q,r);
		
	return 0;
}

