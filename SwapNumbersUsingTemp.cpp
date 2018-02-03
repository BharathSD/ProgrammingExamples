/*
	Program to swap two numbers using Temp variable
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
	int temp = a;
	a = b;
	b = a;
	cout << "After Swap : " << "a = " << a << "," << "b = " << b << endl;
	system("pause");
	return EXIT_SUCCESS;
}