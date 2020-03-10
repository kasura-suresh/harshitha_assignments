/*************************************************************** 
               container:set
               Date:05-Mar-2020
	       J.J.N.D Harshitha

 **************************************************************/
#include <iostream> 
#include <set> 
#include <iterator> 
  
using namespace std; 
  
int main() 
{ 
	set <int> s;
	s.insert(40);// stores the data in order and duplicates are not allowed 
	s.insert(30); 
	s.insert(60); 
	s.insert(20); 
	s.insert(50); 
	s.insert(50);// only one 50 will be added 
	s.insert(90);
	set <int> :: iterator itr; 
	cout << "\nThe set is : "; 
	for (itr = s.begin(); itr != s.end(); ++itr) // used to display the elements in the set
	{ 
		cout << '\t' << *itr; 
	} 
	cout << endl; 
	s.erase(30); // remove the number 30 in the set
	cout << "The set after remove 30 is : ";
        for (itr = s.begin(); itr != s.end(); ++itr) 
	{                                                                                                                                          cout << '\t' << *itr;                                                                                                      }                                                                                                                                  cout << endl;
	cout << "s.lower_bound(40) : " << *s.lower_bound(40) << endl; // lower_bound of the 40
	cout << "s.upper_bound(40) : " << *s.upper_bound(40) << endl; // upper_bound of the 40
	return 0;
}
