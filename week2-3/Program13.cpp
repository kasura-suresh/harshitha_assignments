#include<iostream>
using namespace std;
void read_array(int **&darray,int rows,int cols) {
	cout << "Enter the elements : ";
	for(int i=0;i<rows;i++) {
		for(int j=0;j<cols;j++) {
			cin>>darray[i][j];
		}
	}
}
void write_array(int **&darray,int rows,int cols) {
	cout << "The elements are : ";
	for(int i=0;i<rows;i++) {
		for(int j=0;j<cols;j++) {
			cout << darray[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int **first_darray,**second_darray,rows,cols;
	cout << "Enter number of rows and columns : ";
	cin>>rows;
	cin>>cols;
	first_darray=new int*[rows];
	second_darray=new int*[rows];
	for(int i=0;i<rows;i++) {
		first_darray[i]=new int[cols];
		second_darray[i]=new int[cols];
	}
	read_array(first_darray,rows,cols);
	cout << endl;
	read_array(second_darray,rows,cols);
	cout << endl;
	write_array(first_darray,rows,cols);
	cout << endl;
	write_array(second_darray,rows,cols);
	return 0;
}
