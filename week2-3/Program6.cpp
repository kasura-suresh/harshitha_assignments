/******************************************************************************
 
      write a program to implement a stack on arrays.
      Date:22-Feb-2020
      J.J.N.D Harshitha
 
 ********************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	int stack[30],choice,top=-1,i,number;
	char repeat;
	do
	{
		cout << "Select your choice : " << endl;
		cout << "1.push " << endl;
		cout << "2.pop " << endl;
		cout << "3.Display" << endl;
		cin >> choice;
		switch(choice) {
			case 1: if(top==30) {
					cout << "stack overflow ";
					cout << endl;
				} else {
					cout << "Enter the number of element to push in to the" 
						 " stack : " ;
					++top;
					cin>>stack[top];
					cout << "Element successfully inserted in the stack ";
				        cout << endl;
				}
				break;
			case 2: if(top==-1) {
					cout << "Stack underflow ";
					cout << endl;
				} else {
					cout << "The pop element is : " << stack[top] << endl;
					--top;
				}
				break;
			case 3: if(top==-1) {
					cout << "No elements in the stack ";
					cout << endl;
				} else {
					cout << "Elemets in the stack are : ";
					for(i=top;i>=0;i--) {
						cout << stack[i] << " " ;
					}
					cout << endl;
				}
				break;
			default:cout << "chosen option is wrong ";
		}
		cout << "Enter y/n to continue : ";
		cin>>repeat;
	}while(repeat=='y'||repeat=='Y');
	return 0;
}

