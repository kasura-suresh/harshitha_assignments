/*************************************************************** 
               container:unordered_set
               Date:05-Mar-2020
	       J.J.N.D Harshitha

 **************************************************************/
#include <iostream> 
#include <unordered_set> 
#include <iterator> 
  
using namespace std; 
  
int main() 
{ 
	unordered_set<int> us;
	us.insert(40);// It doesn't have any order and duplicates are not allowed 
	us.insert(30); 
	us.insert(60); 
	us.insert(20); 
	us.insert(50); 
	us.insert(50);// only one 50 will be added 
	us.insert(90);
	unordered_set<int> :: iterator itr; 
	cout << "\nThe unordered_set is : "; 
	for (itr = us.begin(); itr != us.end(); ++itr) // used to display the elements in the set
	{ 
		cout << '\t' << *itr; 
	} 
	cout << endl; 
	us.erase(30); // remove the number 30 in the set
	cout << "The unordered_set after remove 30 is : ";
        for (itr = us.begin(); itr != us.end(); ++itr) 
	{                                                                                                                                          cout << '\t' << *itr;                                                                                                      }                                                                                                                                  cout << endl;
	return 0;
}
