#include<iostream>
#define HALF 0.5
#define AREA_OF_TRIANGLE(half,b,h) (half*b*h)
using namespace std;
int main()
{
	float height,breadth;
	float area_of_triangle;
	cout << "Enter breadth to find the area of the triangle : ";
	cin>>breadth;
	cout << "Enter height to find the area of the triangle : ";
	cin>>height;
	area_of_triangle=AREA_OF_TRIANGLE(HALF,breadth,height);
	cout << "Area of the Triangle is :  ";
	cout << area_of_triangle << endl;
        return 0;
}

