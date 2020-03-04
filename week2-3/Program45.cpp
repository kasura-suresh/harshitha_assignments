#include<iostream>
using namespace std;
int main()
{
	int *malloc_ptr,*calloc_ptr,*new_ptr;
	int n;
	cout << "Enter number of elements to insert in to the array : ";
	cin>>n;
	malloc_ptr=(int *)malloc(n*sizeof(int));
	calloc_ptr=(int *)calloc(n,sizeof(int));
	new_ptr=new int[n];
	cout << "Enter n elements to store in the malloc array : ";
	for(int i=0;i<n;i++) {
		cin>>malloc_ptr[i];
	}
	cout << "Enter the n+1 elements to store in the calloc array : ";
	calloc_ptr=(int *) realloc(calloc_ptr,(n+1)*sizeof(int));
	for(int i=0;i<n+1;i++) {
		cin>>calloc_ptr[i];
	}
	cout << "Enter n elements to store in the new array : ";
	for(int i=0;i<n;i++) {
		cin>>new_ptr[i];
	}
	cout << "The values in the malloc array are : ";
	for(int i=0;i<n;i++) cout << malloc_ptr[i] << " " ;
	cout << endl;
	cout << "The values in the calloc array are : ";
	for(int i=0;i<n+1;i++) cout << calloc_ptr[i] << " ";
	cout << endl;
	cout << "The values in the new array are : ";
	for(int i=0;i<n;i++) cout << new_ptr[i] << " ";
	cout << endl;
	free(malloc_ptr);
	free(calloc_ptr);
	delete[] new_ptr;
	return 0;
}

