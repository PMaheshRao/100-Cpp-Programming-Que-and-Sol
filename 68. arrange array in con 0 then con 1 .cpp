//68. arrange array 10010011 -> 00001111
#include <bits/stdc++.h>

using namespace std;
int main()
{
	vector<int> v;
	cout<<"how many digit you want to enter : ";
	int n; cin>>n;
	
	int val;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		v.push_back(val);
	}
		cout<<"\ninput array : ";
	for(int i:v)
	cout<<" "<<i;
	
	sort(v.begin(),v.end());
	
	cout<<"\noutput array : ";
	for(int i:v)
	cout<<" "<<i;
	
	return 0;
}

