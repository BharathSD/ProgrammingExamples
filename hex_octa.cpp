/*
	Hex and oct equivalent of a number

*/
#include <iostream>

using namespace std;

int main()
{
	int a(70);
	std::cout << "Hex : " << std::hex << a << endl; 
	std::cout << "Oct : " << std::oct << a << endl; 
	cout << std::dec << 70 << endl;
	return EXIT_SUCCESS;
}