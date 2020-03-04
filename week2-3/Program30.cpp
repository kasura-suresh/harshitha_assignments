#include<iostream>
#include<cstring>
using namespace std;
class Memory
{
	public:
	string harddisk;
	string ram;
	void memory(string hd,string r) {
		harddisk=hd;
		ram=r;
	}
};
class Processor
{
	public:
	string pro;
	string sys_type;
	void processor(string p,string s_t) {
		pro=p;
		sys_type=s_t;
	}
};
class Computer : public Memory,public Processor
{
	public:
	string computer_name;
	unsigned int cost;
	Computer(string c_name,unsigned int c_cost) {
		computer_name=c_name;
		cost=c_cost;
	}
	void aboutSystem() {
		cout << "Model name : " << computer_name << endl;
		cout << "Processor : " << pro << " " << "RAM : " << " " << ram << " " << 
			"Hard Disk : " << harddisk << " " << "system type : " << 
			sys_type << " " << "Cost : " << cost << endl;
         }
};
int main()
{
	string hd,processor,sys_type,c_name,ram;
	unsigned int cost;
	cout << "Enter the processor : ";
	cin>>processor;
	cout << "Enter the system type : ";
	cin>>sys_type;
	cout << "Enter the ram : ";
	cin>>ram;
	cout << "Enter the hard disk : ";
	cin>>hd;
	cout << "Enter the cost of the computer : ";
	cin>>cost;
	cout << "Enter the model of the computer like (lenovo,hp...) : ";
	cin>>c_name;
	Computer com(c_name,cost);
	com.memory(hd,ram);
	com.processor(processor,sys_type);
	com.aboutSystem();
	return 0;
}
