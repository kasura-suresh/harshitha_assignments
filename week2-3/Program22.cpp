#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void remove_special_characters(string string1) {
	for(int i=0;i<string1.size();i++) {
		if(int(string1[i])>=65 && int(string1[i])<=90) cout << string1[i];
		else if((int(string1[i])>=97 && int(string1[i])<=122)) cout << string1[i];
                else if((int(string1[i])>=48 && int(string1[i])<=57)) cout << string1[i];
		else continue;
	}
	cout << endl;
}
int compare(string string1,string string2) {
	if(string1.size()==string2.size()) {
	       for(int i=0;i<string1.size();i++) {
		       if(string1[i]==string2[i]) continue;
		       else {
			       if(int(string1[i])>int(string2[i])) return 1;
			       else if(int(string1[i])<int(string2[i])) return -1;
			     }
                } 
	} else return 1;

}
int main()
{
	string string_to_char,char_to_string="",character;
	int i;
	char *array;
	cout << "Enter the string to convert in to character array : ";
	cin>>string_to_char;
	array=new char[string_to_char.size()];
	cout << "string to character convertion : " << endl;
	for(i=0;string_to_char[i]!='\0';i++) {
		array[i]=string_to_char[i];
		cout << array[i] << endl;
	}
	array[i]='\0';
	for(i=0;array[i]!='\0';i++) {
		character=array[i];
		char_to_string.append(character);
	}
	cout << "character to string convertion : ";
	cout << char_to_string;
	cout << endl;
	cout << "Enter the string to comparision with the previous one : ";
	cin>>character;
	cout << "String comparision result is : ";
        i=compare(string_to_char,character);
        if(i==0) cout << "Strings are equal" << endl;
        else cout << "Strings are not equal" << endl;	
	character=string_to_char+" "+character;
	cout << "Strings after concatenation is : " << character << endl;
	cout << "Enter the string to remove the special characters : ";
	cin>>character;
	cout << "Removing special characters in the string : ";
	remove_special_characters(character);
       	return 0;
}             
