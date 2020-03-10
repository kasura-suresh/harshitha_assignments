/************************************************************************
            container:unordered_multimap
            Date:05-Mar-2020
	    J.J.N.D Harshitha

 ***********************************************************************/
#include <iostream> 
#include <iterator> 
#include <unordered_map> 
  
using namespace std; 
  
int main() 
{
	  
	  // empty unordered_multimap container 
          unordered_multimap<int, int> um;
	  // inserting the elements in the unordered_multimap
	  um.insert(pair<int, int>(1, 40)); 
	  um.insert(pair<int, int>(2, 30)); 
	  um.insert(pair<int, int>(3, 60)); 
	  um.insert(pair<int, int>(3, 85));// allow us to store the duplicate keys 
	  um.insert(pair<int, int>(4, 20)); 
	  um.insert(pair<int, int>(5, 50));
	  um.insert(pair<int, int>(5, 30)); // allow us to store the duplicate keys
  	  um.insert(pair<int, int>(6, 50)); 
	  um.insert(pair<int, int>(7, 10));
          // printing the unordered_multimap
	  unordered_map<int, int>::iterator itr; 
      	  cout << "\nThe unordered_multimap is : \n"; 
      	  cout << "\tKEY\tELEMENT\n"; 
      	  for (itr = um.begin(); itr != um.end(); ++itr) { 
  		  cout << '\t' << itr->first << '\t' << itr->second << '\n'; 
	  } 
      	  cout << endl; 
          // remove the key 4 and 6
	  um.erase(4); 
	  um.erase(6);
	  cout << "\nThe unordered_multimap after removing the key 4 and 6 : \n";                                                            cout << "\tKEY\tELEMENT\n";                                                                                                        for (itr = um.begin(); itr != um.end(); ++itr) {                                                                                             cout << '\t' << itr->first << '\t' << itr->second << '\n';                                                               }                                                                                                                                  cout << endl;
	  return 0;
}
