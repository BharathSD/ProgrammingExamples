/*
	Display Leap year or not
*/

#include <iostream>

using namespace std;

bool isLeapYear(const int year)
{
	bool retVal(false);

	if((year % 400) == 0)
		retVal = true;
	else if((year % 100) == 0)
		retVal = false;
	else if((year % 4) == 0)
		retVal = true;
	else
		retVal = false;
	return retVal;
}
int main()
{
	int year(2017);
	cout << (isLeapYear(year) ? "Leap Year" : "Not a Leap Year") << endl;
	return EXIT_SUCCESS;
}