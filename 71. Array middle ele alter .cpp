/*71. Alter middle element of a array
input={1,2,3,45,6,7,8}
output={1,2,3,4,6,7,8}*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	vector<int> v={1,2,3,45,6,7,8,9};
	cout<<"Initial Array : ";
	for(int i:v)
		cout<<i<<" ";
		
		int index=v.size()/2;
		
	cout<<"\nEnter middle element :";
	cin>>v.at(index);
	
	for(int i:v)
		cout<<i<<" ";
	
	return 0;
}

