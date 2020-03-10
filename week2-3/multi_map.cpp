/************************************************************************
            container:multimap
            Date:05-Mar-2020
	    J.J.N.D Harshitha

 ***********************************************************************/
#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 
  
int main() 
{
	  
	  // empty multimap container 
          multimap<int, int> mm;
	  // inserting the elements in the multimap
	  mm.insert(pair<int, int>(1, 40)); 
	  mm.insert(pair<int, int>(2, 30)); 
	  mm.insert(pair<int, int>(3, 60)); 
	  mm.insert(pair<int, int>(3, 23)); // allow us to store the duplicate keys 
	  mm.insert(pair<int, int>(4, 20)); 
	  mm.insert(pair<int, int>(5, 50));
	  mm.insert(pair<int, int>(5, 30)); // allow us to store the duplicate keys
  	  mm.insert(pair<int, int>(6, 50)); 
	  mm.insert(pair<int, int>(7, 10));
          // printing the multimap
	  multimap<int, int>::iterator itr; 
      	  cout << "\nThe multi_map is : \n"; 
      	  cout << "\tKEY\tELEMENT\n"; 
      	  for (itr = mm.begin(); itr != mm.end(); ++itr) { 
  		  cout << '\t' << itr->first << '\t' << itr->second << '\n'; 
	  } 
      	  cout << endl; 
          // remove the key 4 and 6
	  mm.erase(4); 
	  mm.erase(6);
	  cout << "\nThe multi_map after removing the key 4 and 6 : \n";                                                                     cout << "\tKEY\tELEMENT\n";                                                                                                        for (itr = mm.begin(); itr != mm.end(); ++itr) {                                                                                             cout << '\t' << itr->first << '\t' << itr->second << '\n';                                                               }                                                                                                                                  cout << endl;
	  //lower bound and upper bound for multi_map where key=5
	  cout << "mm.lower_bound(5) : " << "\tKEY = "; 
	  cout << mm.lower_bound(5)->first << '\t'; 
	  cout << "\tELEMENT = " << mm.lower_bound(5)->second << endl; 
	  cout << "mm.upper_bound(5) : " << "\tKEY = "; 
	  cout << mm.upper_bound(5)->first << '\t'; 
	  cout << "\tELEMENT = " << mm.upper_bound(5)->second << endl;
	  return 0;
}
