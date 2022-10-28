/*40. Insert Element at desired Position.
input : {1,2,3,4,5}
pos=3 & val=9
output : {1,2,3,9,4,5}

*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	cout<<"Enter Size of Array : "; 
	int n; cin>>n;
	
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	cout<<"\n Input Array : ";
	for(int i:a) cout<<i<<" ";
	
	int pos,val; 
	cout<<"\n Enter index and value : "; cin>>pos>>val;
	
	for(int i=n;i>pos;i--)
		a[i]=a[i-1];
		
	a[pos]=val;
	
	cout<<"\n Output Array : ";
	for(int i:a) cout<<i<<" ";
			
	return 0;
}







/*
Approach 1: 
#include <bits/stdc++.h>

using namespace std;
int main()
{
	cout<<" Enter size of array : ";
	int n;	cin>>n;
	
	vector <int> v;
	int val;
	cout<<"\n Enter Array Element : ";
	for(int i=0;i<n;i++)
		{
			cin>>val;
			v.push_back(val);
		}
		
	cout<<" Array before insertion new ele : ";
	for(int i:v)
	cout<<i<<" ";
	cout<<endl;
		
	int temp=v.back(),pos;
	cout<<"\n Enter index and value : ";
	cin>>pos>>val;
	
	for(int i=n;i>pos;i--)
	{
		v[i]=v[i-1];
	}
	v[pos]=val;
	v.push_back(temp);
	
	for(int i:v)
	cout<<i<<" ";
		
	return 0;
}
*/
