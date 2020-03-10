/**********************************************************************
               container:Deque
               Date:05-Mar-2020
	       J.J.N.D Harshitha

 *********************************************************************/

#include<iostream>
#include<deque>
using namespace std;
void showdq(deque <int> g) // define the method to print the elements in the deque
{ 
	deque <int> :: iterator it; 
	for (it = g.begin(); it != g.end(); ++it) 
		cout << '\t' << *it; 
	cout << '\n'; 
} 

int main() 
{ 
	deque <int> dq; // declare the deque container of type integer
	dq.push_back(10); // adding number 10 at the back of the deque
	dq.push_front(20); // adding number 20 at the front of the deque
	dq.push_back(30); 
	dq.push_front(15); 
	cout << "The deque is : "; 
	showdq(dq); // method call to display the elements 


	cout << "\ndq.size() : " << dq.size(); // used to display the number of elements deque contains
	cout << "\ndq.max_size() : " << dq.max_size(); // display the maximum size of the dq


	cout << "\ndq.at(2) : " << dq.at(2); // displays the elements at 2 position in the dq
	cout << "\ndq.front() : " << dq.front(); 
	cout << "\ndq.back() : " << dq.back(); 


	cout << "\ndq.pop_front() : "; 
	dq.pop_front(); // pop front element
	showdq(dq); 


	cout << "\ndq.pop_back() : "; 
	dq.pop_back(); // pop back element
	showdq(dq); 


	return 0; 
} 

