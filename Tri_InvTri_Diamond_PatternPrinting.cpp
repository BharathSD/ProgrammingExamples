/*
	Program to print the triangle, print inverted triangle, and diamond using *
*/

#include <iostream>

using namespace std;

void printTriangle(const int size)
{
	for(int i=1; i <= size; ++i)
	{
		for(int j=1;j<=(size-i); j++)
		{
			cout << " ";
		}

		for(int j=1;j<=i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void printInvertedTriangle(const int size)
{
	for(int i=1; i<=size; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << " ";
		}

		for(int j=0; j<= (size-i); j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

int main()
{
	int size = 4;
	printTriangle(size);
	printInvertedTriangle(size-1);
	return EXIT_SUCCESS;
}