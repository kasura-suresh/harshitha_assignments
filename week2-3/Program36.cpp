#include<iostream>
using namespace std;
class StackLinkedList 
{
	public:
	int data;
	StackLinkedList* next;
};
int main()
{
	StackLinkedList* stack[30];
	int choice,top=-1;
	char repeat;
	do
	{
	cout << "Stack operations " << endl;
	cout << "Choose choice 1.PUSH 2.POP 3.DISPLAY 4.TOP " << endl;
	cin>>choice;
        switch(choice) {
		case 1: if(top==29) cout << "Stack overflow" << endl;
			else {
                               cout << "Enter the number to push in to the stack : ";
			       ++top;
			       stack[top]=new StackLinkedList();
		               cin>>stack[top]->data;
			       if(top==0) stack[top]->next=NULL;
			       else {
				       stack[top-1]->next=stack[top];
				       stack[top]->next=NULL;
				    }
			      }
			break;
		case 2:if(top==-1) cout << "Stack underflow " << endl;
		       else {
			       cout << "The pop element from the stack is " << stack[top]->data << endl;
			       stack[top]->next=NULL;
			       --top;
			    }
		       break;
		case 3:if(top==-1) cout << "stack empty " << endl;
		       else {
		       cout << "The elements in the stack are : ";
		       for(int i=top;i>=0;i--) {
			       cout << stack[i]->data << " ";
		        }
		       cout << endl;
		       }
		       break;
		case 4: if(top==-1) cout << "stack empty " << endl;
				else cout << "The top element in the stack is : " << stack[top]->data << endl;
			break;
	        default: cout << "choose correct option " << endl;
	    }
	        cout << "Do you want continue (y/n)...." ;
	        cin>>repeat;
	       }while(repeat=='y'||repeat=='Y');
	return 0;
}
