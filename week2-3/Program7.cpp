/*****************************************************************************
   
        write a program to implement queue data structure on array .
        Date:22-Feb-2020
        J.J.N.D Harshitha
 
 ********************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    	int queue[30],choice,rear=-1,front=-1,i,number;
	char repeat;
	do 
	{
		cout << "Select your choice : " << endl;
		cout << "1.Insert " << endl;
		cout << "2.Delete " << endl;
		cout << "3.Display " << endl;
		cin>>choice;
		switch(choice) 
		{
			case 1:if(rear==30) {
				       cout << "Queue overflow " << endl;
			       }
			       else {
				       cout << "Enter number  to insert in the queue : ";
				       ++rear;
				       cin>>queue[rear];
				       cout << "Elements are successfully inserted in the queue "; 
				       cout << endl;
			       }
			       break;
			case 2:if(rear==-1 || front==rear) {
				       cout << "queue underflow " << endl;
			       }
			       else {
				       ++front;
				       cout << "The deleted element is : " << queue[front] << endl;
			       }
			       break;
			case 3:if(rear==-1 || front==rear) {
				       cout << "No elements in the queue " << endl;
			       } else {
				       cout << "Elements in the queue are : ";
				       for(i=front+1;i<=rear;i++) {
					       cout << queue[i] << " ";
				       }
				       cout << endl;
			       }
		}
		cout << "Enter y/n to continue : ";
		cin>>repeat;
	}while(repeat=='y'||repeat=='Y');
        return 0;
}

