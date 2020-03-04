#include <iostream>

using namespace std;

int main()
{
    	int bubble_sort[30];
	int i,j,t,n;
	cout << "Enter number of elements : " ; 
	cin>>n;
	cout << "Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>bubble_sort[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)    
                 {			
		 	 if(bubble_sort[i]>bubble_sort[j]) {
				 t=bubble_sort[i];
				 bubble_sort[i]=bubble_sort[j];
				 bubble_sort[j]=t;
			 }
			 else continue;
		 }
	}
	cout << "After sorting ...... " << endl;
	for(i=0;i<n;i++)
	{
		cout << bubble_sort[i] << " ";
	} 
	cout << endl;	
	return 0;
}

