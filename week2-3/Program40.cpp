#include<iostream>
using namespace std;
class ReverseLinkedList
{
	public:
		int data;
		ReverseLinkedList* next;
};
void reverseLinkedList(ReverseLinkedList **rlk) {
	cout << "The reverse linked list is : ";
	int i=0;
	while(rlk[i]->next!=NULL) ++i;
	while(i!=-1) {
		cout << rlk[i]->data << " ";
		--i;
	}
	cout << endl;
}

int main()
{
	int n;
	cout << "Enter number of elements to insert in to the linked list :";
	cin>>n;
	ReverseLinkedList* rlk[n];
	cout << "Enter the elements : ";
	rlk[0]=new ReverseLinkedList();
	for(int i=0;i<n;i++) {
		if(i<n-1) {
			rlk[i+1]=new ReverseLinkedList();
		}
		cin>>rlk[i]->data;
		if(i==n-1) rlk[i]->next=NULL;
		else rlk[i]->next=rlk[i+1];
	}
	reverseLinkedList(rlk);
	return 0;
}
