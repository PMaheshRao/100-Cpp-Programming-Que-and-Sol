/*69.  write the code for the series eg: if input a2b3c4 then output will be aabbbcccc.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[100];
    cout<<"Enter your series : ";
    cin>>str;                               //Taking input from keyboard

    cout<<"Output : ";
   for(int i=0;str[i]!='\0';i+=2)           //loop to traverse string
   {
           for(char j='0';j<str[i+1];j++)   //loop to print char multiple time
           cout<<str[i];
   }

    return 0;
}
