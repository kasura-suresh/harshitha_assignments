#include<iostream>
#include<cstring>
using namespace std;
class Phone 
{
	public:
		string ram,internal_storage;
	void phone(string r,string i_storage) {
	      	ram=r;
		internal_storage=i_storage;
	}
};
class Redmi : public Phone
{                             
	public:
	string device_name;
	int android_version;
	void redmi(string d_name,int a_version) {
	      device_name=d_name;
	      android_version=a_version;
	 }
};
class RedmiNote5 : public Redmi 
{
	public:
	float inches;
	string model;
	RedmiNote5(string m,float inc) {
		model=m;
	        inches=inc;
	}
	void aboutPhone() {
		cout << "Device_name : " << device_name << endl;
		cout << "Internal Storage : " << internal_storage << " " << "RAM : "  << ram <<
		   " "  <<  "Android_Version : " << android_version << " " << "Inches : " << 
		       inches << " " << "Model : " << model << endl;	
	}
};
int main() 
{
	string ram,i_s,model;
	int a_v;
	float inches;
	cout << "Enter the RAM of the phone : ";
	cin>>ram;
	cout << "Enter the storage of the phone : ";
	cin>>i_s;
	cout << "Enter the android version for the Redmi mobile : ";
	cin>>a_v;
	cout << "Enter the model for the Redmi Note 5 mobile : ";
	cin>>model;
	cout << "Enter the inches for the Redmi Note 5 mobile : ";
	cin>>inches;
	RedmiNote5 r(model,inches);
	r.phone(ram,i_s);
	r.redmi("RedmiNote5",a_v);
	r.aboutPhone();
	return 0;
}
