#include <iostream>

using namespace std;

int main()
{
     int a,b,result;
     char choice;
     cout<< "Enter first number : " << endl;
     cin>>a;
     cout << "Enter second number : " << endl;
     cin>>b;
     cout << "Enter your choice of (+,-,*,/) : " << endl;
     cin>>choice;
    switch(choice) {
		   case '+': result=a+b;
			     cout << "Result is : " << result << endl;									 break;
		   case '-': result=a-b;											 cout << "Result is : " << result << endl;
			     break;										       case '*': result=a*b;
			     cout << "Result is : " << result << endl;							         break;											   case '/': result=a/b;   
			     cout << "Result is : " << result << endl;						                 break;							        			   default: cout << "Chosen choice is wrong....." << endl;
    }
      return 0;
}

