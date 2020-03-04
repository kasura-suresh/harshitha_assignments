#include<iostream>
using namespace std;
int main() {
	int **darray,rows,cols;
	cout << "Enter the number rows and columns : ";
	cin>>rows;
	cin>>cols;
	darray=new int*[rows];
	for(int i=0;i<rows;i++) {
		darray[i]=new int[cols];
	}
	cout << "Enter the elements : ";
	for(int i=0;i<rows;i++) {
		for(int j=0;j<cols;j++) {
			cin>>darray[i][j];
		}
	}
	for(int i=0;i<rows;i++) {
		for(int j=0;j<cols;j++) {
			cout << darray[i][j] << " ";
		}
	}
	cout << endl;
	return 0;
}
