#include<iostream>
using namespace std;
int staticFunction() {
	int static num=0;
	++num;
	return num;
}
int main() {
	int choice;
	cout << "select your choice to show the usage of that keyword : ";
        cout << "1.static" << endl;
	cout << "2.const" << endl;
	cout << "3.extern" << endl;
	cout << "4.volatile" << endl;
	cout << "5.restrict" << endl;
	cin>>choice;
	switch(choice) {
		case 1:
	}
        return 0;
}
