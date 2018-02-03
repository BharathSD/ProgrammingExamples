#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
	cout << " No of Arguments : " << argc << endl; 
	for(int i(0); i< argc; ++i)
		cout << argv[i] << endl;
	return EXIT_SUCCESS;
}