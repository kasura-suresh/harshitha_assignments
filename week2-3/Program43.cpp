#include <iostream> 
  
using namespace std; 
  
class Complex 
{ 
	private: 
		    double real; 
		    double imag; 
			  
	public: 
		    explicit Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {} 
		      
		      bool operator== (Complex rhs) { 
       return (real == rhs.real && imag == rhs.imag)? true : false; 
    } 
}; 
  
int main() 
{     
	    Complex com1(3.0, 0.0); 
	  
	    if (com1 == (Complex)3.0) cout << "Same" << endl; 
	    else cout << "Not Same" << endl; 
            return 0; 
} 
