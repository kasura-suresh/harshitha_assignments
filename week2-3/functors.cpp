/************************************************
           Functor
           Date:06-Mar-2020
	   J.J.N.D Harshitha

 ***********************************************/

#include<iostream>
#include<vector>
#include<set>
#include<cmath>
#include<algorithm>
using namespace std;
int Pow(int x) { // define the function to calculate the power of the given number
        return pow(x,2);
}
int main()
{
	set<int> s={1,2,3,4,5,6,7,8,9,10}; // declare set containing the values
	vector<int> v; // declare vector which is used to store the return results from the function
	transform(s.begin(),s.end(),back_inserter(v),Pow);// function call by using the function                                                                    object.
	cout << "The power of the numbers are : ";
        vector<int> :: iterator vi;
	for(vi=v.begin();vi!=v.end();++vi) { // printing the power of the numbers
		cout << *vi << " ";
	}
	cout << endl;
}
