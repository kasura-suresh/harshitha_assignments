#include<iostream>
using namespace std;
class LinkedList
{
	public:
		int data;
		LinkedList* next;
};
void printElements(LinkedList **lk) {
	int i=0;
	cout << "The elements in the linked list are : ";
	while(lk[i]->next!=NULL) {
		cout << lk[i]->data << " ";
	        ++i;
	}
	cout << lk[i]->data;
	cout << endl;
}
int main()
{
	int n;
	cout << "Enter number of elements to insert in to the linked list : ";
	cin>>n;
	LinkedList* lk[n];
	lk[0]=new LinkedList();
	cout << "Enter the elements : ";
	for(int i=0;i<n;i++) {
		if(i<n-1) {
			lk[i+1]=new LinkedList();
		}
		cin>>lk[i]->data;
		if(i==n-1) lk[i]->next=NULL;
		else lk[i]->next=lk[i+1];
	}
	printElements(lk);
	int ele_rem;
	cout << "Enter the element to be remove : ";
	cin>>ele_rem;
	int i=0;
	for(i=0;lk[i]->next!=NULL;i++) {
		if(lk[i]->data==ele_rem) { 
			for(int j=i;lk[j]->next!=NULL;j++) {
			lk[j]->data=lk[j+1]->data;
			lk[j]->next=lk[j+1]->next;
			}
			break;
		} else continue;
	}
	if(lk[i]->data==ele_rem) {
		lk[i-1]->next=NULL;
	}
	if(i==n-1) cout << "Element is not present in the linked list " << endl;
	else printElements(lk);
	return 0;
}

