/**************************************************************************
         container: vector
         Date:05-Mar-2020
	 J.J.N.D Harshitha

**************************************************************************/
#include<iostream>
#include<vector>
using namespace std;
class Vector // create a class and named it as Vector
{
	public:
	vector<int> v; // declare vector container
	void displayVector(vector<int> );// declare displayVector method to display the elments in the vector
};
void Vector::displayVector(vector<int> v) { // defining displayVector method
	vector<int> :: iterator v_iterator; // creating the iterator to print the elements in the elements in the vector 
	v_iterator=v.begin();
	while(v_iterator!=v.end()) {
		cout << *v_iterator << " ";
		++v_iterator; 
	}
	cout << endl;
}
int main()
{
	int n,m;
	Vector v1; // creating object v1 to the class Vector 
	cout << "Enter number of elements to push in to the vector : ";
	cin >> n;
	cout << "Enter the elements : ";
	for(int i=0;i<n;i++) { // reading the elements from the user 
		cin >> m;
		v1.v.push_back(m); // inserting each element in to the vector
	}
	cout << "The elements in the vector are :";
	v1.displayVector(v1.v); // calling the method to print the elements in the vector
	return 0;
}
