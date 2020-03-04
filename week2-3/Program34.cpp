#include<iostream>
using namespace std;
template<typename T>
void linearSearch(T elements[],int size,T search_element) {
	int i;
	for(i=0;i<size;i++) {
		if(elements[i]==search_element) {
			break;
		} else continue;
	}
	if(i==size) cout <<  search_element << " not found in the array " << endl;
	else cout << search_element << " is found at index " << i+1 << " in the array " << endl;
}
int main()
{
	int n;
	cout << "Enter the number of elements in the array : ";
	cin>>n;
	int int_array[n];
	char char_array[n];
	cout << "Enter the integer elements to search : " ;
	for(int i=0;i<n;i++) {
		cin>>int_array[i];
	}
	cout << "Enter the integer element to be searched : ";
	int int_search;
	cin>>int_search;
	cout << "Enter the character elements to search : ";
	for(int i=0;i<n;i++) {
		cin>>char_array[i];
	}
	cout << "Enter the character element to be searched : ";
	char char_search;
	cin>>char_search;
	linearSearch(int_array,n,int_search);
	linearSearch(char_array,n,char_search);
	return 0;
}
