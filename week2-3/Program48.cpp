#include<iostream>
#include<vector>
using namespace std;
class Vector
{
	public:
	vector<int> v;
};
int main()
{
	int n,value;
	cout << "Enter number of elements to insert in to the vector " ;
	cin>>n;
	Vector v1;
	cout << "Enter elements : ";
	for(int i=0;i<n;i++) {
		cin>>value;
		v1.v.push_back(value);
	}
	cout << "The values in the vector are : ";
	
	cout << endl;
	return 0;
}




