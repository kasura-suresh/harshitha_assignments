#include<iostream>
using namespace std;
class Rectangle
{
    public:	
	float length;
	float breadth;
	float area() {
		return length*breadth;
	}
	bool operator>(Rectangle rect) {
		if(this->area()>rect.area()) return 1;
	        else return 0;
	}
};
int main()
{
	Rectangle rect1,rect2;
	cout << "Enter length and breadth for the rectangle one : ";
	cin>>rect1.length;
	cin>>rect1.breadth;
	cout << "Enter length and breadth for the rectangle two : ";
	cin>>rect2.length;
	cin>>rect2.breadth;
	if(rect1 > rect2) cout << "Rectangle one is greater than Rectangle two " << endl;
	else cout << "Rectangle two is greater than Rectangle one " << endl;
	return 0;
}
