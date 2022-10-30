//15. round off float value 17.457 -> 17.46
#include <bits/stdc++.h>

using namespace std;
int main()
{
	float var=36.4248;
	cout<<fixed<<setprecision(2)<<var;
	return 0;
}

/*
approach 2:
int main()
{
	int var=36.485;
float value = (int)(var * 100 + .5);
    cout<< (float)value / 100;

	return 0;
}
*/
