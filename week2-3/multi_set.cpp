/************************************************************
            container:multiset
            Date:05-Mar-2020
	    J.J.N.D Harshitha

 ***********************************************************/
#include <iostream> 
#include <set> 
#include <iterator> 
  
using namespace std; 
  
int main() 
{ 
	    // empty multiset container 
	    multiset <int, greater <int> > ms;// The greater<int> is used to store the elements in the desending order with out 
	                                              //this the elements normaly stored in a asending order      
	    ms.insert(40); 
	    ms.insert(30); 
	    ms.insert(60); 
	    ms.insert(20); 
	    ms.insert(50); 
	    ms.insert(50);// unlike set the multiset is able to store the duplicate values
	    ms.insert(10);
	    multiset <int, greater <int> > :: iterator itr; 
	    // printing the multiset 
	    cout << "\nThe multiset is : "; 
	    for (itr = ms.begin(); itr != ms.end(); ++itr) 
	    { 
		    cout << '\t' << *itr; 
	    } 
    	    cout << endl;
	    // lower bound and upper bound of the value 40
	    cout << "ms.lower_bound(40) : " << *ms.lower_bound(40) << endl; 
	    cout << "ms.upper_bound(40) : " << *ms.upper_bound(40) << endl; 
	    return 0;
}
            	    

