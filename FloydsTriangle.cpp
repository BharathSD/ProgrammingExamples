/*
	Floyd's Triangle : Size is taken as input
	e.g. for size 4
	1
	2 3
	4 5 6
	7 8 9 10
*/

#include <iostream>

using namespace std;

void printFloydsTriangle(const int size)
{
	int value(1);

	for(int rowItr(1); rowItr <= size; ++rowItr)
	{
		for(int colItr(1); colItr <= rowItr; ++colItr)
			cout << value++ << " ";
		cout << endl;
	}
}

int main()
{
	printFloydsTriangle(4);
	return EXIT_SUCCESS;
}