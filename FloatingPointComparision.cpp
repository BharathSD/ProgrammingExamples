/*
Comparision of Floating point data types
*/

#include<iostream>
using namespace std;

int main()
{
	float f = 7.1;
	double d = 7.1;

	cout << (f == d ? "It is same!!!" : "It is not same!!") << endl;
	system("pause");
	return EXIT_SUCCESS;
}