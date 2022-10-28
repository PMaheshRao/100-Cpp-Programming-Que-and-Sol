/*41. display sum of series 1+1/2+1/3+1/4+1/5+.....+1/n
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
	cout<<"Enter n value : ";
	int n; cin>>n;
	double sum=0;
	
	for(float i=1;i<=n;i++)
		sum+=1/i;
	
	cout<<"\n sum of series 1+1/2+1/3+1/4+1/5+.....+1/n : where n = "<<n<<" & sum = "<<sum;
	return 0;
}

