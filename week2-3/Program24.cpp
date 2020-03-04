#include<iostream>
using namespace std;
struct Base {
	void agePrediction(int age) {
		if(age<18) cout << "Not Eligible for the vote " << endl;
		else cout << "Eligible for the vote " << endl;
	}
};
class Children : public Base {
	public:
		int age;
};
int main()
{
	Children age;
	cout << "Enter the age : ";
	cin>>age.age;
	age.agePrediction(age.age);
	return 0;
}
