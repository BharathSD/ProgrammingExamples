/*
	Program to swap two numbers without using temp
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Provide Two numbers to swap!!" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << "Before Swap : " << "a = " << a << "," << "b = " << b << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "After Swap : " << "a = " << a << "," << "b = " << b << endl;
	system("pause");
	return EXIT_SUCCESS;
}