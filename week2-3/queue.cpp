/********************************************************************
              container:queue
              Date:05-Mar-2020
	      J.J.N.D Harshitha

 *******************************************************************/
#include <iostream> 
#include <queue> 
  
using namespace std; 
  
void showq(queue <int> gq) // define a method to print the elements in the queue
{ 
	queue <int> g = gq; 
	while (!g.empty()) 
	{ 
		cout << '\t' << g.front(); 
		g.pop(); 
	} 
	cout << '\n'; 
} 

int main() 
{ 
	queue <int> gquiz; // declare queue container of type integer
	gquiz.push(10); // push number 10 in to the queue
	gquiz.push(20); 
	gquiz.push(30); 

	cout << "The queue gquiz is : "; 
	showq(gquiz); // method call to print the elements in the queue

	cout << "\ngquiz.size() : " << gquiz.size(); // displays the size of the queue
	cout << "\ngquiz.front() : " << gquiz.front(); 
	cout << "\ngquiz.back() : " << gquiz.back(); 

	cout << "\ngquiz.pop() : "; 
	gquiz.pop(); // pop the front element
	showq(gquiz); // method call

	return 0; 
} 
