/**************************************************
           function pointers
           Date:06-Mar-2020
	   J.J.N.D Harshitha

 *************************************************/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void power_of_two(auto vec,void(*Pow)(int)) { // define the function
	for(auto vi=vec.begin();vi!=vec.end();++vi) {
		Pow(*vi);
	}
}
int main()
{
	vector<int> v;// declare the vector
	int n,m;
	cout << "Enter the number of elements to push in to the vector : " ;
        cin>>n; 
	cout << "Enter the elements : ";
	for(int i=0;i<n;i++) { // reading the values from the user
		cin>>m;
		v.push_back(m);
	}
	cout << "The numbers with power of 2 are : ";
	power_of_two(v,[](int x) { cout << pow(x,2) << " "; });// method call
	cout << endl;
	return 0;
}
