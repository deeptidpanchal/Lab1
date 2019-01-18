#include <iostream>
#include <string>
using namespace std;

/* This function returns floating part of number string */
string returnFloatingPart(string str)
{
	int pos = str.find(".");
	if(pos == string::npos)
		return "";
	else
		return str.substr(pos + 1);
}

/* This function checks if the string contains all digits */
bool containsOnlyDigit(string str)
{
	int len =  str.length();
	for(int i = 0; i < len; i++)
	{	
		if(str.at(i) < '0' || str.at(i) > '9')
			return false;
	}
	// if we reach here all characters are digits
	return true;
}

/* This function replaces all single space by %20
 * Used in URLs */
string replaceBlankWith20(string str)
{
	string replaceBy = "%20";
	int n = 0;
	
	while((n = str.find(" ", n)) != string::npos)
	{
		str.replace(n, 1, replaceBy);
		n = n + replaceBy.length();
	}
	return str;
}	

int main() 
{ 
    string fnum = "23.342"; 
    cout << "Floating part is: " << returnFloatingPart(fnum) << endl; 
  
    string num = "3452"; 
    if (containsOnlyDigit(num)) 
        cout << "string contains only digit" << endl; 
  
    string urlex = "google com in"; 
    cout << replaceBlankWith20(urlex) << endl; 
  
    return 0;       
} 
