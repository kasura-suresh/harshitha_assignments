/****************************************************************************
              container:forward_list
              Date:05-Mar-2020
	      J.J.N.D Harshitha

 ***************************************************************************/
#include<iostream> 
#include<forward_list>  
using namespace std; 
  
int main() 
{ 
	       // Initializing forward list 
	       forward_list<int> flist = {10, 20, 30, 40, 50}; 
	       flist.push_front(60); // inserting the element 60 at the front part of the list
	       cout << "The forward list after push_front operation : "; 
	       for (int&c : flist)  // displaying the elements in the list
		       cout << c << " "; 
	       cout << endl;
	       flist.emplace_front(70); // inserting the element 70 at the front part of the list
	       cout << "The forward list after emplace_front operation : "; 
	       for (int&c : flist)  
		       cout << c << " "; 
	       cout << endl;
	       flist.pop_front();  // pop the front element in the list
	       cout << "The forward list after pop_front operation : "; 
	       for (int&c : flist)  
		       cout << c << " "; 
	       cout << endl;
	       forward_list<int>::iterator ptr; 
	       ptr=flist.insert_after(flist.begin(), {1, 2, 3}); // inserting the elements after the specified location
	       cout << "The forward list after insert_after operation : "; 
    	       for (int&c : flist)  
		       cout << c << " "; 
	       cout << endl; 
	       ptr=flist.emplace_after(ptr,2);// insert the element after the specified location
	       cout << "The forward list after emplace_after operation : "; 
	       for (int&c : flist)  
		       cout << c << " "; 
	       cout << endl; 
	       ptr=flist.erase_after(ptr);// delete the element after the specified location
	       cout << "The forward list after erase_after operation : "; 
	       for (int&c : flist)  
		       cout << c << " "; 
	       cout << endl; 
	       flist.remove(30); // remove the element which is specified
	       return 0;
}
