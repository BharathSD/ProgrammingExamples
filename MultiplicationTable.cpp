/*
	Multiplication table
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int mulTable(10);
	for (int itr = 1; itr <= 10; itr++)
	{
		int mulout = mulTable*itr;
		cout << mulTable << " X " << setw(2) << itr << " = " << (mulTable*itr) << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}