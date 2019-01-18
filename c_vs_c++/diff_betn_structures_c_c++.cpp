/* Structures in C++ can have member functions */

/* We can directly initialize non-static structure data memebers in C++11 */
/* "struct" keyword is not required to declare a structure variable in C++11 */
#if 0
#include <iostream>
using namespace std;

struct sRecord
{
	int x = 7;
};

int main()
{
	sRecord S;
	cout << S.x << endl;
	return 0;
}
#endif

/* In C++ structures can have static members */
#if 0
#include <iostream>
using namespace std;

struct sRecord
{
	static int x;
};

int main()
{
	sRecord S;
	return 0;
}
#endif

/* C++ structures can have constructors */
#if 0
#include <iostream>
using namespace std;

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
	sStudent S(2);
	cout << S.roll << endl;
	return 0;
}
#endif

/* Empty structures in C++ have a size of 1 */
#if 1
#include <iostream>
using namespace std;

struct sStudent
{
	
};

int main()
{
	cout << sizeof(sStudent) << endl;
	return 0;
}
#endif