#include<iostream>
using namespace std;
class CopyConstructor
{
   public:
	float *length;
	float *breadth;
	float *area_of_triangle;
	CopyConstructor(float l,float b) {
		length=new float;
		breadth=new float;
		area_of_triangle=new float;
		*length=l;
		*breadth=b;
		*area_of_triangle=3.14*(*length)*(*breadth);
	}
	CopyConstructor(const CopyConstructor &obj) {
		cout << "copy constructor called"<< endl;
		length=new float;
		breadth=new float;
		area_of_triangle=new float;
		*length=*obj.length;
		*breadth=*obj.breadth;
		*area_of_triangle=3.14*(*length)*(*breadth);
	}
	void displayArea() {
		cout << "Area of the triangle is :  " << *area_of_triangle << endl;
	}
};
void display(CopyConstructor cc) {
	    cc.displayArea();
}
int main()
{
	float length,breadth;
	cout << "Enter the length of the triangle  :  ";
	cin>>length;
	cout << "Enter the breadth of the triangle  :  ";
	cin>>breadth;
	CopyConstructor cc(length,breadth);
	CopyConstructor ccc=cc;
	display(cc);
	display(ccc);
	return 0;
}
