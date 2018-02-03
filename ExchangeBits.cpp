/*
	Program to exchange bits

	 _ _ _ _|_ _ _ _
	|_|_|_|_|_|_|_|_|
	 a b c d|e f g h

	 a <-> e, b <-> f, c <-> g, d <-> h
	 a <-> h, b <-> g, c <-> f, d <-> e
*/

#include <iostream>

using namespace std;

void swapChar(char & charData)
{
	int noOfbits(sizeof(char) * 8);
	for(int i(0), j(noOfbits/2); i < noOfbits/2; ++i,++j)
	{
		if ((charData >> i & 1) != (charData >> j & 1))
		{
			charData ^= 1 << i;
			charData ^= 1 << j;
		}
	}
}

int main()
{
	char ch = 'a';
	swapChar(ch);
	return EXIT_SUCCESS;
}