/*******************************************************************************
      write a program of insertion sort 
          Date:22-Feb-2020
              J.J.N.D Harshitha
 
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	int i,j,k=0,n,m,p,t,insertion_sort[30],insert_array[30];
	cout << "Enter number of elements : " ;
	cin>>n;
	cout << "Enter the elements : " << endl;
	for(i=0;i<n;i++) {
		cin>>insertion_sort[i];
	}
	insert_array[k]=insertion_sort[0];
	k++;
	for(j=1;j<n;j++) {
		for(i=0;i<k;i++) {
			if(insert_array[i]<insertion_sort[j]) {
				continue;
			} else {
				p=insertion_sort[j];
				for(m=i;m<j+1;m++) {
					t=insert_array[m];
					insert_array[m]=p;
					p=t;
				}
				k++;
				break;
			}
		}
		if(i==k) {
			insert_array[k]=insertion_sort[j];
			k++;
		}
	}
	cout << "Elements after sorting : " << endl;
	for(i=0;i<n;i++) {
		cout << insert_array[i] << " " ;
	}
	cout << endl;
	return 0;
}

