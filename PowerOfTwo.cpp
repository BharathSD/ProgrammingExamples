/*
	Program to check power of two or not

*/
#include <iostream>

using namespace std;

bool isPowerOfTwo(const int numb)
{
	bool powerOfTwo(true);
	int noOfBits(sizeof(numb) * 8 );
	int counter(0);
	for(int bitItr(noOfBits -1); bitItr >=0; bitItr--)
	{
		if( numb & (1 << bitItr))
			counter++;

		if(counter > 1)
		{
			powerOfTwo = false;
		}
	}
	return powerOfTwo;
}
int main()
{
	cout << (isPowerOfTwo(18) ? "Power of Two" : "Not Power of Two") << endl;
	return EXIT_SUCCESS;
}