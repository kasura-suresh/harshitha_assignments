/************************************************************************
            container:Map
            Date:05-Mar-2020
	    J.J.N.D Harshitha

 ***********************************************************************/
#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 
  
int main() 
{
	  
	  // empty map container 
          map<int, int> m;
	  // inserting the elements in the map
	  m.insert(pair<int, int>(1, 40)); 
	  m.insert(pair<int, int>(2, 30)); 
	  m.insert(pair<int, int>(3, 60)); 
	  m.insert(pair<int, int>(4, 20)); 
	  m.insert(pair<int, int>(5, 50));
	  m.insert(pair<int, int>(5, 30)); // doesn't allow us to store the duplicate keys
  	  m.insert(pair<int, int>(6, 50)); 
	  m.insert(pair<int, int>(7, 10));
          // printing the map
	  map<int, int>::iterator itr; 
      	  cout << "\nThe map is : \n"; 
      	  cout << "\tKEY\tELEMENT\n"; 
      	  for (itr = m.begin(); itr != m.end(); ++itr) { 
  		  cout << '\t' << itr->first << '\t' << itr->second << '\n'; 
	  } 
      	  cout << endl; 
          // remove the key 4 and 6
	  m.erase(4); 
	  m.erase(6);
	  cout << "\nThe map after removing the key 4 and 6 : \n";                                                                           cout << "\tKEY\tELEMENT\n";                                                                                                        for (itr = m.begin(); itr != m.end(); ++itr) {                                                                                             cout << '\t' << itr->first << '\t' << itr->second << '\n';                                                                 }                                                                                                                                  cout << endl;
	  //lower bound and upper bound for map m where key=5
	  cout << "m.lower_bound(5) : " << "\tKEY = "; 
	  cout << m.lower_bound(5)->first << '\t'; 
	  cout << "\tELEMENT = " << m.lower_bound(5)->second << endl; 
	  cout << "m.upper_bound(5) : " << "\tKEY = "; 
	  cout << m.upper_bound(5)->first << '\t'; 
	  cout << "\tELEMENT = " << m.upper_bound(5)->second << endl;
	  return 0;
}
