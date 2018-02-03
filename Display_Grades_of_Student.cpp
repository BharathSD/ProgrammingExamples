/*
	Display grades of a student, 0 - 39 is fail, 40 -59 is C, 60-69 is B, 70 - 100 is A
*/

#include <iostream>

using namespace std;

int main()
{
	float percentage;
	cout << "Enter The Percentage" << endl;
	cin >> percentage;
	if ((percentage >0) && (percentage <= 39))
		cout << "Fail!" << endl;
	else if ((percentage >=40) && (percentage <= 59))
		cout << "C" << endl;
	else if ((percentage >=60) && (percentage <= 69))
		cout << "B" << endl;
	else if ((percentage >=70) && (percentage <= 100))
		cout << "A" << endl;
	else
		cout << "Invalid Percentage!" << endl;
	return EXIT_SUCCESS;
}