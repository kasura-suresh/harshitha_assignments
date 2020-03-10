/************************************************************
            container:unordered_multiset
            Date:05-Mar-2020
	    J.J.N.D Harshitha

 ***********************************************************/
#include <iostream> 
#include <unordered_set> 
#include <iterator> 
  
using namespace std; 
  
int main() 
{ 
	    // empty unordered_multiset container 
	    unordered_multiset <int> u_ms;     
	    u_ms.insert(40); 
	    u_ms.insert(30); 
	    u_ms.insert(60); 
	    u_ms.insert(20); 
	    u_ms.insert(50); 
	    u_ms.insert(50);// unlike unordered_set the unordered_multiset is able to store the duplicate values
	    u_ms.insert(10);
	    unordered_multiset <int> :: iterator itr; 
	    // printing the unordered_multiset 
	    cout << "\nThe unordered_multiset is : "; 
	    for (itr = u_ms.begin(); itr != u_ms.end(); ++itr) 
	    { 
		    cout << '\t' << *itr; 
	    } 
    	    cout << endl;
	    return 0;
}
            	    

