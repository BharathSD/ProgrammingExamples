/*
	Program to generate Magic Square
*/

#include <iostream>

using namespace std;

/*
	Magic square is generated only for odd size
	returns null if the size is even
*/
int** magicSquareGenerator(const int size)
{
	if(size % 2 == 0)
		return NULL;
	// allocate memory for 2 D matrix
	int **magicSquare = new int*[size];
	for(int itr(0); itr < size; itr++)
		magicSquare[itr]=new int[size];

	for(int rowItr(0); rowItr < size; rowItr++)
		for(int colItr(0); colItr < size; colItr++)
			magicSquare[rowItr][colItr]=0;

	// logic for magic square generation
	int value(1);
	int row(size/2);
	int col(size-1);
	int maxNumb(size*size);
	do
	{
		row = (row + size) % size;
		col = (col + size) % size;

		if(magicSquare[row][col] != 0)
		{
			row++;
			col=col-2;
			row = (row + size) % size;
			col = (col + size) % size;
		}
		magicSquare[row][col] = value;
		row--;
		col++;
		value++;
	}while(value <= maxNumb);
	return magicSquare;
}

void displayMagicSquare(int **magicSquare,const int size)
{
	for(int rowItr(0); rowItr < size; rowItr++)
	{
		for(int colItr(0); colItr < size; colItr++)
			cout << magicSquare[rowItr][colItr] << "\t";
		cout << endl;
	}
}

void free2DArray(int **data,const int size)
{
	for(int itr(0); itr <size; itr++)
		delete[] data[itr];
	delete[] data;
}
int main()
{
	int size(7);
	int **magicSquare = magicSquareGenerator(size);

	displayMagicSquare(magicSquare, size);
	free2DArray(magicSquare,size);
	return EXIT_SUCCESS;
}