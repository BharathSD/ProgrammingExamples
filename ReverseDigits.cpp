/*
	Reverse the Digits of a given number
*/

#include <iostream>

using namespace std;

int main()
{
	int numb = 1452;
	int RevNumb=0;
	while(numb)
	{
		RevNumb = (RevNumb * 10) + numb % 10;
		numb /=10;
	}
	cout << RevNumb << endl;
	return EXIT_SUCCESS;
}