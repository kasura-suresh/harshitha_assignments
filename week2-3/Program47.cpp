#include<iostream>
using namespace std;
class ShallowCopy
{
	public:
		int *a,b;
		ShallowCopy(int a_value,int b_value) {
		          a=new int;
			  *a=a_value;
			  b=b_value;
		}
		void changeA(int a_value) {
			*a=a_value;
		}
		int returnA() {
			return *a;
		}
};
class DeepCopy
{
	public:
		int *a,b;
		DeepCopy(int a_value,int b_value) {
			a=new int;
			*a=a_value;
			b=b_value;
		}
		DeepCopy(const DeepCopy &obj) {
			a=new int;
			*a=*obj.a;
			b=obj.b;
		}
		void changeA(int a_value) {
			*a=a_value;
		}
		int returnA() {
			return *a;
		}
};
int main()
{
	cout << "**************Shallow copy****************" << endl;
	ShallowCopy sc(9,8); //creating object sc for the class ShallowCopy and initializing a and b                             //values with 9 and 8
	cout << "The a and b values of the object sc are : " << sc.returnA() << " " << sc.b << endl;
	ShallowCopy sc1 = sc; //copying the values from object sc to sc1 by using the copy constructor
	cout << "The a and b values of the object sc1 are : " << sc1.returnA() << " " << sc1.b << endl;
	//now i am changing the value of 'a' for the object sc1 
	sc1.changeA(10);
	cout << "The a and b values of the object sc after changing the value of the object sc1 : " 
		<< sc.returnA() << " " << sc.b << endl;
	// This makes that the value of the 'a' of the object sc automatically changes when we 
	// change the value of 'a' of the object sc1
	cout << "The a and b values of the object sc1 are : " << sc1.returnA() << " " << sc1.b << endl;
	cout << "*****************Deep copy****************** " << endl;

	DeepCopy dc(9,8); //creating object dc for the class DeepCopy and initializing a and b values with                                     9 and 8
	cout << "The a and b values of the dc are : " << dc.returnA() << " " << dc.b << endl;
	DeepCopy dc1 = dc; // copying the values from object dc to dc1 by using the copy constructor
	cout << "The a and values of the object dc1 are : " << dc1.returnA() << " " << dc1.b << endl;
	// now i am changing the value of 'a' for the object dc1
	dc1.changeA(10);
	cout << "The a and b values of the object dc after changing the value of the object dc1 : "
		 << dc.returnA() << " " << dc.b << endl;
	// So now the value of the 'a' of the object dc does not change it remains same eventhough we 
                   // change the value of the 'a' of the object dc1
        cout << "The a and b values of the object dc1 are : " << dc1.returnA() << " " << dc1.b << endl;
	return 0;
}

