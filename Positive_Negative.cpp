/*
	Find if the number is positive or negative
*/

#include <iostream>

using namespace std;

int main()
{
	int numb = 10;
	int bitPosition = sizeof(int) * 8 - 1;
	cout << (numb & (1 << bitPosition) ? "Negative" : "Positive" )<< endl;
	system("pause");
	return EXIT_SUCCESS;
}