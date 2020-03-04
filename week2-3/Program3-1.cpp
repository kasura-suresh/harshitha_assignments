#include <iostream>

using namespace std;

int main()
{
        int selection_sort[30];
        int i=0,j,t,n,min=selection_sort[0],k;
        cout << "Enter the number of elements : ";
        cin>>n;
	cout << "Enter the elements : " << endl;
	for(i=0;i<n;i++) {
		cin>>selection_sort[i];
	}				    
	i=0;	
	while(i!=n) {
		min=selection_sort[i];
		for(j=i;j<n;j++) {             									            if(min>=selection_sort[j]) {          									  min=selection_sort[j];
			          k=j;											     } 
	     	} 
		t=selection_sort[i];                    							    selection_sort[i]=selection_sort[k];	 	
		selection_sort[k]=t;									            i=i+1; 
	}		
     	cout << "After sorting......" << endl;		
      	for(i=0;i<n;i++) { 
	 	cout << selection_sort[i] << " ";	
	}	
	cout << endl;
	return 0;
}

