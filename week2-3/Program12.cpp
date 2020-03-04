#include<iostream>
using namespace std;
int main()
{
	int *first_array,*second_array,t,i,n;
	cout << "Enter the number of elements in the array : ";
	cin>>n;
	first_array=new int[n];
	second_array=new int[n];
	cout << "Enter the elements in the first array : ";
	for(i=0;i<n;i++) {
		cin>>first_array[i];
	}
	cout << "Enter the elements in the second array : ";
	for(i=0;i<n;i++) {
		cin>>second_array[i];
		t=second_array[i];
		second_array[i]=first_array[i];
		first_array[i]=t;
	}
	cout << "Elements in the first array are : ";
	for(i=0;i<n;i++) {
		cout << first_array[i] << " ";
	}
	cout << endl;
	cout << "Elements in the second array are : ";
	for(i=0;i<n;i++) {
		cout << second_array[i] << " ";
	}
	cout << endl;
}
