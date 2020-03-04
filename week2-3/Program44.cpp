#include<iostream>
using namespace std;
class Base 
{
        public:
	int data;	
	void setValue(int d) {
		data=d;
	}
	virtual int getValue()=0;
};
class Children : public Base
{
	public:
	int getValue();
};
int Children::getValue() {
	return data;
}
int main()
{
	int data;
	cout << "Enter the number to store : ";
	cin>>data;
	Children c;
	c.setValue(data);
	cout << "The number you stored is : ";
	cout << c.getValue() << endl;
	return 0;
}
