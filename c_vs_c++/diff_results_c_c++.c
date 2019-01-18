#if 0
#include<stdio.h> 
int main() 
{ 
  printf("%d\n", sizeof('a')); 
  return 0; 
}
#endif

#if 1
#include <stdio.h> 
int T; 
   
int main() 
{ 
    struct T { double x; };  // In C++, this T hides the global variable T,  
                            // but not in C 
    printf("%d\n", sizeof(struct T)); 
	//printf("%d\n", sizeof(T)); 
	printf("%d\n", sizeof(1==1));  
    return 0; 
} 
#endif
