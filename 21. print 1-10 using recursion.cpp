//21. print 1-10 using recursion
#include <bits/stdc++.h>

using namespace std;

void print(int i)
{
	cout<<i<<" ";
	if(i<10)
	print(i+1);
	
	return;
}

int main()
{
	print(1);
	return 0;
}

