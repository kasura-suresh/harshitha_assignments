/*******************************************
               pairs
               Date:06-Mar-2020
	       J.J.N.D Harshitha
 ******************************************/
#include <iostream>  
using namespace std; 
  
int main() 
{ 
	pair<int, char>pair1 = make_pair(1, 'a'); // Declare pair1
	pair<int, char>pair2 = make_pair(9, 'A'); // Declare pair2
	// performing operations on the pairs
	cout << (pair1 == pair2) << endl; 
	cout << (pair1 != pair2) << endl; 
	cout << (pair1 >= pair2) << endl; 
	cout << (pair1 <= pair2) << endl; 
	cout << (pair1 > pair2) << endl; 
	cout << (pair1 < pair2) << endl; 

	return 0; 
} 
