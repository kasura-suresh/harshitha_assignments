#include<iostream>
using namespace std;
int reg_b,reg_c,reg_d,reg_e,reg_h,reg_l;
bool reg_status[6]={0,0,0,0,0,0};
void read(int reg_num) {
	switch (reg_num) {
		case 1:if(reg_status[0]==0) {
			       cout << "There is no value to read "<< endl;
			} else {
				cout << reg_b << endl;
			}
		       break;
		case 2:if(reg_status[1]==0) {
			      cout << "There is no value to read " << endl;
		       } else cout << reg_c << endl;
		      break;
	        case 3:if(reg_status[2]==0) {
			      cout << "There is no value to read " << endl;
			} else cout << reg_d << endl;
		      break;
		case 4:if(reg_status[3]==0) cout << "There is no value to read " << endl;
			       else cout << reg_e << endl;
		        break;
		case 5:if(reg_status[4]==0) cout << "There is no value to read " << endl;
		              else cout << reg_h << endl;
	                break;
                 case 6:if(reg_status[5]==0) cout << "There is no value to read " << endl;
	                     else cout << reg_l << endl;
			break;
                 default:cout << "Choose correct register option" << endl;			     
	}
}
void write(int reg_num,int data) {
	switch(reg_num) {
		case 1:reg_b=data;
		       reg_status[0]=1;
		       cout << "Data wrote in to the register B successfully " << endl;
		       break;
		case 2:reg_c=data;
		       reg_status[1]=1;
		       cout << "Data wrote in to the register C successfully " << endl;
		       break;
		case 3:reg_d=data;
		       reg_status[2]=1;
		       cout << "Data wrote in to the register D successfully " << endl;
		       break;
		case 4:reg_e=data;
		       reg_status[3]=1;
		       cout << "Data wrote in to the register E successfully " << endl;
		       break;
		case 5:reg_h=data;
		       reg_status[4]=1;
		       cout << "Data wrote in to the register H successfully " << endl;
		       break;
		case 6:reg_l=data;
		       reg_status[5]=1;
		       cout << "Data wrote in to the register L successfully " << endl;
		       break;
		default:cout << "choose correct register option " << endl;
        }
}
int main() 
{
	int reg_choice,r_w_choice,number;
	char ch;
	do {
	cout << "choose the register to write are read  " << endl;
	cout << "1.B 2.C 3.D 4.E 5.H 6.L  : ";
	cin>>reg_choice;
	cout << "Choose the option to read or to write " << endl;
	cout << "1.Read 2.Write : ";
	cin>>r_w_choice;
	if(r_w_choice==1) {
		read(reg_choice);
	}else if(r_w_choice==2) {
		cout << "Enter the number to write in to the register : ";
		cin>>number;
		write(reg_choice,number);
	  } else cout << "choose either read or write operations " << endl;
	cout << "Choose y/n to continue.... ";
	cin>>ch;
        }while(ch=='y');
	    

        return 0;
}
