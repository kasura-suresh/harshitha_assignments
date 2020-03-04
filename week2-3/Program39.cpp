#include<iostream>
using namespace std;
class CircularLinkedList
{
	public:
		int data;
		CircularLinkedList* next;
};
void printElements(CircularLinkedList **clk) {
	cout << "Elements in the linked list are : ";
	int i=0;
	while(clk[i]->next!=clk[0]) {
		cout << clk[i]->data << " ";
		++i;
	}
	cout << clk[i]->data;
	cout << endl;
}
int main()
{
	int n;
	cout << "Enter number of elements to enter in to the linked list : ";
	cin>>n;
	CircularLinkedList* clk[n];
	clk[0]=new CircularLinkedList();
	cout << "Enter elements : ";
	for(int i=0;i<n;i++) {
		if(i<n-1) {
			clk[i+1]=new CircularLinkedList();
		}
		cin>>clk[i]->data;
		if(i==n-1) clk[i]->next=clk[0];
		else clk[i]->next=clk[i+1];
	}
	printElements(clk);
	return 0;
}

