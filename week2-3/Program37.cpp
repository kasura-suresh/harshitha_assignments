#include<iostream>
using namespace std;
class QueueLinkedList
{
	public:
		int data;
		QueueLinkedList* next;
};
int main() 
{
	int choice,rear=-1,front=-1;
	char repeat;
	QueueLinkedList* queue[30];
	do
	{
		cout << "Queue operations " << endl;
		cout << "1.INSERT 2.DELETE 3.DISPLAY " << endl;
		cin>>choice;
		switch(choice) {
			case 1:if(rear==29) cout << "queue overflow" << endl;
			       else {
				       cout << "Enter the number to insert in to the queue : ";
				       ++rear;
				       queue[rear]=new QueueLinkedList();
				       cin>>queue[rear]->data;
				       if(rear==0) queue[rear]->next=NULL;
				       else {
					       queue[rear-1]->next=queue[rear];
					       queue[rear]->next=NULL;
					    }
				     }
			       break;
			 case 2:if(front>=rear||rear==-1) cout << "queue underflow " << endl;
			        else {
					++front;
					cout << "The deleted element from the queue is : " << queue[front]->data << endl;
					queue[front]->next=NULL;
				     }
				break;
			 case 3:if(front>=rear||rear==-1) cout << "queue empty" << endl;
				else {
					cout << "The elements in the queue are : ";
					for(int i=front+1;i<=rear;i++) {
						cout << queue[i]->data << " ";
					}
					cout << endl;
				      }
				break;
			  default:cout << "choose correct option" << endl;
		  }
		  cout << "Do you want to continue (y/n).... " ;
		  cin>>repeat;
	}while(repeat=='y'||repeat=='Y');
	return 0;
}
