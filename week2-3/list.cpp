/****************************************************************************
           container:List
           Date:05-Mar-2020
	   J.J.N.D Harshitha

 ***************************************************************************/

#include<iostream>
#include<list>
using namespace std;
class List // creating a class and named it as a List
{
	public:
		list<int> l; // declare the list container of type integer
		void displayList(list<int> ); // declare a method to display the elements in the list
};
void List::displayList(list<int> l) { // define the method to display the elements in the list
	list<int> :: iterator li; // create a iterator to display the elements in the list
	li=l.begin();
	while(li!=l.end()) {
		cout << *li << " ";
	        ++li;
	}
	cout << endl;
}
int main() 
{
	int n,m;
	cout << "Enter number of elements to push in to the list : ";
	cin >> n;
	List l1; // creating an object for the class List 
	cout << "Enter the elements : ";
	for(int i = 0; i < n; i++) {
		cin >> m;
		l1.l.push_back(m); // inserting each element in to the list
	}
	cout << "The elements in the list are : ";
	l1.displayList(l1.l);// method call
	return 0;
}

