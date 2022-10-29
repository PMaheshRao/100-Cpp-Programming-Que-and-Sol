/*60. take two array input and merge them in new array in sorted order.
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	vector<int> v1;
	vector<int> v2;
	
	int n,m,val;
	cout<<"\n enter size of first array : ";	cin>>n;
	cout<<"\n enter size of second array : "; cin>>m;
	
	cout<<"\n Enter first array : ";
	for(int i=0;i<n;i++)
	{
		cin>>val;
		v1.push_back(val);
	}
	cout<<"\n Enter Second array : ";
	for(int i=0;i<n;i++)
	{
		cin>>val;
		v2.push_back(val);
	}
	
	vector <int> v3(v1);
	for(int i=0;i<n;i++)
		v3.push_back(v2[i]);
	
	sort(v3.begin(),v3.end());
	cout<<"\nOutput array"<<endl;
	for(int i:v3)
		cout<<" "<<i;
	return 0;
}

