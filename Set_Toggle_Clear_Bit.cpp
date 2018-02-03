/*
	Program to set, clear and toggle a particular bit of a number
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int bitPosition = 4;
	a = a | (1 << bitPosition);
	cout << a << endl;
	a = a & (~(1 << bitPosition));
	cout << a << endl;
	a = a ^ (1 << bitPosition);
	cout << a << endl;
	system("pause");
	return EXIT_SUCCESS;
}