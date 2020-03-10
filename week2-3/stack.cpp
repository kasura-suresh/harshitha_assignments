/***********************************************************
            container:stack
            Date:05-Mar-2020
	    J.J.N.D Harshitha

 **********************************************************/
#include<iostream>
#include<stack>
using namespace std; 
  
void showstack(stack <int> s) // define method to print the elements in the stack
{ 
	while (!s.empty()) 
	{ 
		cout << '\t' << s.top(); 
		s.pop(); 
	} 
	cout << '\n'; 
} 

int main () 
{ 
	stack <int> s; // declare stack container of type integer
	s.push(10); // pushing the elements in to stack
	s.push(30); 
	s.push(20); 
	s.push(5); 
	s.push(1); 

	cout << "The stack is : "; 
	showstack(s); // method call to display the elements in the stack

	cout << "\ns.size() : " << s.size(); // size of the stack
	cout << "\ns.top() : " << s.top(); // top element of the stack


	cout << "\ns.pop() : "; 
	s.pop(); // pop the first element in the stack
	showstack(s); // method call

	return 0; 
} 

