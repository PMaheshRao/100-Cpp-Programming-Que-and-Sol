//14. find root of quadratic equ.
#include <bits/stdc++.h>

using namespace std;
int main()
{
	double a,b,c,D;
	cout<<"Quadratic Equation  : ax^2+b^x+c=0 \n Enter the value of ";
	cout<<"a : "; cin>>a;
	cout<<"b : "; cin>>b;
	cout<<"c : "; cin>>c;
	
	D=pow(b,2)-(4*a*c);
	
	cout<<"\n root 1 :"<<(-b+sqrt(D))/(2*a);
	cout<<"\n root 1 :"<<(-b-sqrt(D))/(2*a);
	
	return 0;
}

