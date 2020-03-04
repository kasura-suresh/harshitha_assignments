/******************************************************************************
 
        write a program to set 10th bit and reset 7th bit of a number.
        Date:22-Feb-2020
        J.J.N.D Harshitha
 
 ********************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    	int number,i=0,j,count=0;
	bool binary_array[30],res;
	cout << "Enter the number to set 10th and reset 7th bits of a number : " ;
	cin>>number;
	while(number!=0) {
		res=number%2;
		binary_array[i]=res;
		number=number/2;
		++i;
	}
	cout << "Binary format of the number befor swapping : ";
	for(j=i-1;j>=0;j--) {
		cout << binary_array[j];
	}
	cout << endl;
	cout << "Binary format of the number after swapping : ";
	if(i<=6) {
		for(j=i-1;j>=0;j--) {
			cout << binary_array[j];
		}
		cout << endl;
	}
	else 
	{
		for(j=i-1;j>=0;j--) {
			++count;
			if(count==7) {
				binary_array[j]=0;
				cout << binary_array[j];
			} else if(count==10) {
				binary_array[j]=1;
				cout << binary_array[j];
			} else {
				cout << binary_array[j];
			}

		}
		cout << endl;
	}
	return 0;
}

