#include<iostream>
using namespace std;
template<class T>
class BubbleSort
{
	public:
		void sorting(T *&elements,int n);
		void display(T *&elements,int n);
};
template<class T>
void BubbleSort<T>::sorting(T *&elements,int n) {
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(elements[i]<elements[j]) continue;
			else {
				T temp;
				temp=elements[j];
				elements[j]=elements[i];
				elements[i]=temp;
			      }
		}
	}
}
template<class T>
void BubbleSort<T>::display(T *&elements,int n) {
	cout << "Elements after sorting : " ;
	for(int i=0;i<n;i++) {
		cout << elements[i] << " " ;
	}
	cout << endl;
}
int main()
{
	BubbleSort<int> int_bs;
	BubbleSort<char> char_bs;
	int n;
	cout << "Enter the number of the elements to sort : ";
	cin>>n;
	int *int_array;
	int_array=new int[n];
	char *char_array;
	char_array=new char[n];
	cout << "Enter the elements for the integer array : ";
	for(int i=0;i<n;i++) {
		cin>>int_array[i];
	}
	cout << "Enter the elements for the character array : ";
	for(int i=0;i<n;i++) {
		cin>>char_array[i];
	}
	int_bs.sorting(int_array,n);
	char_bs.sorting(char_array,n);
	int_bs.display(int_array,n);
	char_bs.display(char_array,n);
	return 0;
}
