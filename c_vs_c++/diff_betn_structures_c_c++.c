/* Structures in C cannot have member functions */

/* We cannot directly initialize structure data memebers in C */
/* "struct" keyword is required to declare a structure variable in C */
#if 0
#include <stdio.h>

struct sRecord
{
	int x = 7;
};

int main()
{
	struct sRecord S;
	printf("%d\n", S.x);
	return 0;
}
#endif

/* C structures cannot have static members */
#if 0
#include <stdio.h>

struct sRecord
{
	static int x;
};

int main()
{
	struct sRecord S;
	printf("%d\n", S.x);
	return 0;
}
#endif

/* C structures cannot have constructor */
#if 0
#include <stdio.h>

struct sStudent
{
	int roll;
	
	sStudent(int x)
	{
		roll = x;
	}
};

int main()
{
	struct sStudent S(2);
	printf("%d\n", S.roll);
	return 0;
}
#endif

/* Empty structures in C have a size of 0 */
#if 1
#include <stdio.h>

struct sStudent
{
	
};

int main()
{
	struct sStudent S;
	printf("%d\n", sizeof(S));
	return 0;
}
#endif