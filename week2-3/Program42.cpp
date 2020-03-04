#include<iostream>
using namespace std;
int main()
{
	float length,breadth;
	float  area_of_rectangle;
	cout << "Enter length and breadth of the rectangle : ";
	cin>> length >>  breadth;
	cout << "Area of the rectangle before type casting : ";
	area_of_rectangle= length * breadth;
	cout << area_of_rectangle << endl;
	cout << "Area of the rectangle after type casting : ";
	area_of_rectangle= (int) length * (int) breadth;
	cout << area_of_rectangle << endl;
	return 0;
}
