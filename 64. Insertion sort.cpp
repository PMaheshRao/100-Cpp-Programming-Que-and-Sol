//64. Insertion sort.
#include <bits/stdc++.h>


using namespace std;
int main()
{
	int arr[]={85,12,32,43,1,5,66,8,30,15}, n=10;
	
	int i, key, j;
	cout<<"input array : ";
	for(int i:arr)
	cout<<" "<<i;
	
	
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
 
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
	
	cout<<"\nSorted array : ";
	for(int i:arr)
	cout<<" "<<i;
	return 0;
}
