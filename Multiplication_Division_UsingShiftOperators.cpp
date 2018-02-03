/*
	Multiplication and Division using shift operators
	Doesn't work for negative numbers
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	cout << (a << 2) << endl;
	cout << (a >> 2) << endl;
	system("pause");
	return EXIT_SUCCESS;
}