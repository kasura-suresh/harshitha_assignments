#include<iostream>
#include<cstring>
using namespace std;
class SingleTon
{
	public:
		int data;
		static SingleTon* Get(int data) {
			cout << "method called " << endl;
		     if(!instance) {
			    instance=new SingleTon(data);
		      }
		      return instance;
		}
		void getData() {
			cout << "Value of data is : " << data << endl;
		}
	private:
		SingleTon(int data) {
		  cout << "constructor called" << endl;
	          this->data=data;       
		}
		static SingleTon* instance;
};
SingleTon* SingleTon::instance=NULL;
int main()
{
	int data;
	cout << "Enter the value first object : ";
	cin>>data;
	SingleTon* object=SingleTon::Get(data);
        object->getData();
	cout << "Enter the value for the second object : " ;
	cin>>data;
	SingleTon* obj1=SingleTon::Get(data);
	obj1->getData();
	return 0;
}
	

