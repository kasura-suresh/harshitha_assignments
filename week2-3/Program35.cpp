#include<iostream>
using namespace std;
struct IntegerLinkedList {
	int data;
	struct IntegerLinkedList* next;
};
void printIntegerLinkedList(struct IntegerLinkedList **int_lk) {
	cout << "The elements in the struct linked list are : ";
	int i=0;
	while(int_lk[i]->next!=NULL) {
	     cout << int_lk[i]->data << " ";
	     ++i;
	}
	cout << int_lk[i]->data;
	cout << endl;
}
class CharacterLinkedList {
	public:
	        char data;
		CharacterLinkedList* next;
};
void printCharacterLinkedList(CharacterLinkedList **char_lk) {
        cout << "The elements in the class linked list are : ";
	int i=0;
	while(char_lk[i]->next!=NULL) {
		cout << char_lk[i]->data << " ";
		++i;
	}
	cout << char_lk[i]->data;
	cout << endl;
}
int main()
{
	int n;
	cout << "Enter number of elements to insert in the linkedlist " ;
	cin>>n;
	struct IntegerLinkedList* int_lk[n];
	cout << "Enter the elements in to the integer struct linked list : ";
	int_lk[0]=(struct IntegerLinkedList*)malloc(sizeof(struct IntegerLinkedList));
	for(int i=0;i<n;i++) {
		if(i<n-1)
		{
		  int_lk[i+1]=(struct IntegerLinkedList*)malloc(sizeof
				(struct IntegerLinkedList));
		}
	        cin>>int_lk[i]->data;
		if(i==n-1) int_lk[i]->next=NULL;
		else int_lk[i]->next=int_lk[i+1];
	}
	printIntegerLinkedList(int_lk);
	cout << "Enter the elements in to the character class linked list : ";
	CharacterLinkedList* char_lk[n];
	char_lk[0]=new CharacterLinkedList();
	for(int i=0;i<n;i++) {
		if(i<n-1) {
			char_lk[i+1]=new CharacterLinkedList();
		}
		cin>>char_lk[i]->data;
		if(i==n-1) char_lk[i]->next=NULL;
		else char_lk[i]->next=char_lk[i+1];
	}
        printCharacterLinkedList(char_lk);
        return 0;
}
