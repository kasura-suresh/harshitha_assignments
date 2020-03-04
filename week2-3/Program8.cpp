#include<iostream>
using namespace std;
class Processor 
{
	public:
        int data;
	virtual int read() {
		return data;
	}
	virtual void write(int num) {
		data=num;
        }
};
class Sram : public Processor
{
	public:
	int data;
	int read() {
		return data;
	}
	void write(int num) {
		data=num;
	}
};
class Dram : public Processor
{
	public:
	int data;
	int read() {
		return data;
	}
	void write(int num) {
		data=num;
	}
};
int main()
{
	Processor *p;
	Sram sram;
	Dram dram;
	p=&sram;
	cout << "Enter the number to write in to the sram ";
        cin>>sram.data;	
	p->write(sram.data);
	cout << "Reading the value from sram   " ;
	sram.data=p->read();
	cout << sram.data;
	cout << endl;
	p=&dram;
	cout << "Enter the number to write in to the dram " ;
	cin>>dram.data;
	p->write(dram.data);
	cout << "Reading the value from the dram  ";
	dram.data=p->read();
        cout << dram.data << endl;
        return 0;
}

