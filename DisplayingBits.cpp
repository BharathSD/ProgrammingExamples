/*
	Displaying bits of the integer
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int noOfBits = sizeof(int)*8 - 1;
	for (int itr = noOfBits; itr >= 0; itr--)
		cout << (1 & (a >> itr));
	cout << endl;
	return EXIT_SUCCESS;
}