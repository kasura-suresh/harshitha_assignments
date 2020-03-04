#include<iostream>
using namespace std;
class Area
{
	public:
	virtual float area(float l,float b) {
		return l*b;
	}
};
class Rectangle : public Area
{
	public:
	float area(float length,float breadth) {
		return length*breadth;
	}
};
class Triangle : public Area
{
	public:
	float area(float length,float breadth) {
		return 0.5*length*breadth;
	}
};
int main()
{
	float length,breadth;
	Area* area;
	Rectangle rect;
	area=&rect;
	cout << "Enter length and breadth for the rectangle : ";
	cin>>length>>breadth;
	cout << "Area of the Rectangle is : " << area->area(length,breadth) << endl;
	Triangle tri;
	area=&tri;
	cout << "Enter length and breadth for the triangle : ";
	cin>>length>>breadth;
	cout << "Area of the trinangle is : " << area->area(length,breadth) << endl;
	return 0;
}
