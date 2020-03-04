#include<iostream>
using namespace std;
class Demo
{
	public:
	int dx,dy;
	friend void operator>>(Demo& d,istream& myin) {
		myin >> d.dx >> d.dy;
	}
	friend void operator<<(Demo& d,ostream& myout) {
		myout << "The values of dx and dy are : " << endl;
		myout << d.dx << " " << d.dy << endl;
	}
};
int main()
{
	Demo d;
	cout << "Enter the values of the dx and dy : ";
	d >> cin;
	d << cout;
	return 0;
}
