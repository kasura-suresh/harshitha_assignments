#include<iostream>
using namespace std;
class ConnectingLinkedLists
{
	public:
		int data;
		ConnectingLinkedLists* next;
};
void connectLinkedLists(ConnectingLinkedLists **clk1,ConnectingLinkedLists **clk2) {
	int i=0,j=0,insertion_point;
	while(clk1[i]->next!=NULL) ++i;
	insertion_point=i;
	clk1[i]->next=clk2[j];
	cout << "The insertion point of two linkedl lists is : " << insertion_point+1 << endl;
}
int main()
{
	int n,m;
	cout << "Enter number of elements in the first linked list : ";
	cin>>n;
	cout << "Enter number of elements in the second linked list : ";
	cin>>m;
	cout << "Enter elements for the first linked list : ";
	ConnectingLinkedLists* clk1[n];
	clk1[0]=new ConnectingLinkedLists();
	for(int i=0;i<n;i++) {
		if(i<n-1) {
			clk1[i+1]=new ConnectingLinkedLists();
		}
		cin>>clk1[i]->data;
		if(i==n-1) clk1[i]->next=NULL;
		else clk1[i]->next=clk1[i+1];
	}
	cout << "Enter elements for the second linked list : ";
	ConnectingLinkedLists* clk2[m];
	clk2[0]=new ConnectingLinkedLists();
	for(int i=0;i<m;i++) {
		if(i<m-1) {
			clk2[i+1]=new ConnectingLinkedLists();
		}
		cin>>clk2[i]->data;
		if(i==n-1) clk2[i]->next=NULL;
		else clk2[i]->next=clk2[i+1];
	}
	connectLinkedLists(clk1,clk2);
	return 0;
}
