#include<iostream>
#include<cstring>
using namespace std;
class ParameterizedConst
{
     public:
	     int stu_id;
	     string stu_name;
	     char stu_grade;
             ParameterizedConst(int s_id,string s_name,char s_grade) {
		     stu_id=s_id;
		     stu_name=s_name;
		     stu_grade=s_grade;
             }
};
int main()
{
	int id;
	string name;
	char grade;
	cout << "Enter student id : ";
	cin>>id;
	cout << "Enter student name : ";
	cin>>name;
	cout << "Enter student grade : ";
	cin>>grade;
	ParameterizedConst pc(id,name,grade);
	cout << "The student details are " << endl;
	cout << "ID: " <<  pc.stu_id << "  " << "Name: "  << pc.stu_name << "  " << "Grade: " <<                       pc.stu_grade << endl;
	return 0;
}
