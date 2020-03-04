/******************************************************************************
      write a program to implement linear search.
      Date:21-Feb-2020
      J.J.N.D Harshitha
 
 ********************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	int i,searchnum,n,linear_search[30];
	cout << "Enter number of elements : " ;
	cin>>n;
	cout << "Enter the elements : " << endl;
	for(i=0;i<n;i++) {
		cin>>linear_search[i];
	}
	cout << "Enter the number to search : ";
	cin>>searchnum;
	for(i=0;i<n;i++) {
		if(linear_search[i]==searchnum) {
			break;
		}
	}
	if(i==n) {
		cout << "Number " << searchnum << " is not found in the Array" << endl;
	} else {
		cout << "Number " << searchnum << " is found at the index " << i+1 << " in the " 
			              " Array" << endl;
	}
        return 0;
}

