#include<iostream>
using namespace std;
struct Age
{
	int age;
};
class AgePrediction
{
	public:
		int age;
		bool agePrediction(int);
};
bool AgePrediction::agePrediction(int age) {
	if(age<18) return 0;
	else return 1;
}
int main()
{
	struct Age a;
	bool result;
	AgePrediction age;
	cout << "Enter the age for class : ";
	cin>>age.age;
	cout << "Enter the age for struct : ";
	cin>>a.age;
	if(a.age<18) cout << "Not Eligible for the vote in struct " << endl;
	else cout << "Eligible for the vote in struct" << endl;
	result=age.agePrediction(age.age);
	if(result==1) cout << "Eligible for the vote in class " << endl;
	else cout << "Not Eligible for the vote in class " << endl;
	return 0;
}
	
