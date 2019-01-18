#if 0
#include<iostream> 
using namespace std; 

int& fun() 
{ 
    static int x = 10; 
    return x; 
} 

int main() 
{ 
    fun() = 30; 
    cout << fun() << endl;
    return 0; 
} 
#endif

#if 0
#include<iostream> 
using namespace std; 
  
int fun(int &x) 
{ 
    return x; 
}
 
int main() 
{ 
    int x1 = 10;
	int &r = x1;
	
	//cout << fun(10); 
	cout << fun(r) << endl;
    return 0; 
} 
#endif

#if 0
#include<iostream> 
using namespace std; 
  
void swap(char* &str1, char* &str2) // pointer to reference
{ 
  char *temp = str1; 
  str1 = str2; 
  str2 = temp; 
} 
  
int main() 
{ 
  //char *str1 = "GEEKS"; 
  //char *str2 = "FOR GEEKS"; 
  const char *str1 = "GEEKS"; 
  const char *str2 = "FOR GEEKS";
  
  swap(str1, str2); 
  cout << "str1 is " << str1<< endl; 
  cout << "str2 is " << str2<< endl; 
  return 0; 
} 
#endif

#if 0
#include<iostream> 
using namespace std; 
  
int main() 
{ 
   int x = 10; 
   int *ptr = &x; 
   //int& *ptr1 = ptr; //Reference to a pointer is not possible
   int* &ptr1 = ptr; // pointer to reference if possible
} 
#endif

#if 0
#include<iostream> 
using namespace std; 
  
int main() 
{ 
   int *ptr = NULL; 
   int &ref = *ptr; // Reference can never be NULL
   cout << ref; 
} 
#endif

#if 0
#include<iostream> 
using namespace std; 
  
int &fun() 
{ 
    int x = 10; 
    return x; 
} 
int main() 
{ 
    fun() = 30; 
    cout << fun() << endl; 
    return 0; 
} 
#endif

#if 0
#include <iostream> 
using namespace std;
  
int f(int &x, int c) 
{ 
    c  = c - 1; 
    if (c == 0) return 1; 
    x = x + 1; 
    return f(x, c) * x; 
} 

int main() 
{ 
    int p = 5; 
    cout << f(p,p) << endl;
} 
#endif

#if 1
#include<iostream>
using namespace std;

int main()
{
  const int x = 10;
  const int& ref = x; // Constant reference that refers to a constant

  cout << ref << endl;
  return 0;
}
#endif