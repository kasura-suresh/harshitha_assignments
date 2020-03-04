/******************************************************************************
 
         write a program to implement call by value and call by reference.
         Date:22-Feb-2020
         J.J.N.D Harshitha
 
 ********************************************************************************/

#include <iostream>

using namespace std;

void swapByValue(int x,int y) {
     	int temp=x;
	x=y;
	y=temp;
}
void swapByReference(int &x,int &y) {
	int temp=x;
	x=y;
	y=temp;
}

int main()
{
	int first_num,second_num;
	cout << "Enter the numbers to swap : ";
	cin>>first_num;
	cin>>second_num;
	swapByValue(first_num,second_num);
	cout << "Swapping of numbers by call by value " << "first_num : " << first_num << 
		" second_num : " << second_num << endl;
	swapByReference(first_num,second_num);
	cout << "Swapping of numbers by call by reference " << "first_num : " << first_num << 
		  " second_num : " << second_num << endl;
	return 0;
}

