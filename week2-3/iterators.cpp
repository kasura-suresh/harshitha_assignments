/*****************************************************
                Iterators
                Date:006-Mar-2020
		J.J.N.D Harshitha
*****************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={1,2,3,4,5};// Declare the vector of size 5
	vector<int> :: iterator vi;// Declaring the iterator for the above vector
	cout << "The elements in the vector are : " ;
	for(vi=v.begin();vi!=v.end();++vi) { // printing the elements in the vector 'v'
		cout << *vi << " ";
	}
	cout << endl;
	vi=v.begin();// initializing the iterator to the begining 
	advance(vi,3);// This method is used to increment the iterator up to the specified number
	cout << "After advancing now the iterator is pointing to the element : " << *vi << endl;
	vi=v.begin();
	vector<int> :: iterator vn=next(vi,2);// This method is used to get the next element of the 
	                                             // specified number
	cout << "The next element of next(vi,2) is : " <<  *vn << endl;
	vi=v.end();
        vector<int> :: iterator vp=prev(vi,2);// This method is used to get the prev element of the                                                             specified number
	cout << "The prev element of prev(vi,2) is : " << *vp << endl;
	vector<int> v1={6,7,8,9};
	vi=v.end();
	copy(v1.begin(),v1.end(),inserter(v,vi));// The inserter method is used to insert the                                     elements from any container to any container at the specifed position
	cout << "The elements after insertion in to the vector : ";
        for(int x:v) {
	     cout << x << " ";
        }
        cout << endl;
        return 0;
}	

