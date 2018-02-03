/*
	Sum of Digits of a given number
*/

#include <iostream>

using namespace std;

int main()
{
	int numb = 1452;
	int sum=0;
	while(numb)
	{
		sum += numb % 10;
		numb /=10;
	}
	cout << sum << endl;
	return EXIT_SUCCESS;
}