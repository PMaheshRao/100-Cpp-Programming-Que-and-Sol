/*42. program to display & sum : 1=2+3+....+n*/

#include <bits/stdc++.h>

using namespace std;
int main()
{
	int s=0,n;
	cout<<"Enter n value : ";	cin>>n;
	
	cout<<"series : ";
	
	for(int i=1;i<n;i+=2){
		cout<<i<<"+";
		s+=i;
	}
	cout<<"\n sum = "<<s;
		
	
	
	return 0;
}

