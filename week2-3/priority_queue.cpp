/**********************************************************************
              container:priority_queue
              Date:05-Mar-2020
	      J.J.N.D Harshitha

 *********************************************************************/
#include <iostream> 
#include <queue> 
  
using namespace std; 
  
void showpq(priority_queue <int> gq) // define method to display the elements in the priority_queue
{ 
	priority_queue <int> pq = gq; 
	while (!pq.empty()) 
	{ 
		cout << '\t' << pq.top(); 
		pq.pop(); 
	} 
	cout << '\n'; 
} 
  
int main () 
{ 
	priority_queue <int> pq; // declare container priority_queue of type integer
	pq.push(10); // push elements in to the priority_queue
	pq.push(30); 
	pq.push(20); 
	pq.push(5); 
	pq.push(1); 

	cout << "The priority queue gquiz is : "; 
	showpq(pq); // method call

	cout << "\npq.size() : " << pq.size(); // displays the size of the priority_queue
	cout << "\npq.top() : " << pq.top(); // displays the top element in the queue


	cout << "\npq.pop() : "; 
	pq.pop(); // pop the first element in the queue
	showpq(pq); // method call

	return 0; 
} 
