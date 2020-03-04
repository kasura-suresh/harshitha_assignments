/****************************************************************************
   
          write a program to implement the binary search.
          Date:22-Feb-2020
          J.J.N.D Harshitha

 **********************************************************************/

#include <iostream>

using namespace std;

int main()
{
      	int search_num,i,n,flag=0,mid,low=0,high,binary_search[30];
	cout << "Enter the number of elements : ";
	cin>>high;
	cout << "Enter the elements in (sorted order) : "<< endl;
	for(i=0;i<high;i++) {
		cin>>binary_search[i];
	}
	cout << "Enter the number to search : ";
	cin>>search_num;
	mid=(low+high)/2;
	n=high;
	while(flag==0 && n!=0)
	{
		if(binary_search[mid]==search_num) {
			cout << "Number " <<  search_num << " is found at index " << mid+1 << 
				    " in the Array" << endl;
			flag=1;
		} 
		else if(search_num>binary_search[mid]) {
			low=mid+1;
			mid=(low+high)/2;
		} 
		else if(search_num<binary_search[mid]) {
			high=mid-1;
			mid=(low+high)/2;
		}
		--n;
	}

	if(flag==0) {
		cout << "Number " << search_num << " is not found in the Arrray " << endl;
	}
	return 0;
}

