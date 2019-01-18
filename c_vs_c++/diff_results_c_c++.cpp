#if 0
#include <iostream>
using namespace std;

int main()
{
	cout << sizeof('a') << endl;
	return 0;
}
#endif

#if 1
#include <iostream>
using namespace std;

int T; 
int main() 
{ 
    struct T { double x; };  // In C++, this T hides the global variable T,  
                            // but not in C 
    cout << sizeof(T) << endl; 
	cout << sizeof(1==1) << endl; // output = 1 in c++ (which is the size of boolean datatype)   
    
	return 0; 
} 
#endif