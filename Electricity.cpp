/*
	The unit consumed by the user is to be taken as input
	The output is to be the amount to be paid by the customer

		unit						|	Charge/ unit	
	________________________________|___________________
	upto 199						|	@1.20
	200 and above but less than 400	|	@1.50
	400 and above but less than 600	|	@1.80
	600 and above					|	@2.00

	If bill exceeds Rs. 400 then a surcharge of 15% will be charged
	the minimum bill should be of Rs. 100/-
*/

#include <iostream>
#include <string>
using namespace std;

float calculateAmount(const unsigned int consumedUnits)
{
	unsigned int remainingUnits(consumedUnits);
	float totalAmount(0.0);
	do
	{
		unsigned int units(0);
		if(remainingUnits >= 600)
		{
			units = remainingUnits - 599;
			totalAmount += units * 2.0f;
		}
		else if((remainingUnits >= 400) && (remainingUnits < 600))
		{
			units = remainingUnits - 399;
			totalAmount += units * 1.8f;
		}
		else if((remainingUnits >= 200) && (remainingUnits < 400))
		{
			units = remainingUnits - 199;
			totalAmount += units * 1.5f;
		}
		else
		{
			units = remainingUnits;
			totalAmount += units * 1.2f;
		}
		remainingUnits -= units;
	}while (remainingUnits);

	if(totalAmount < 100.0f)
		totalAmount = 100.0f;
	else if(totalAmount > 400.0f)
		totalAmount += (0.15f * totalAmount);
	return totalAmount;
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		cout << "Give the amount of units consumed as command line argument" << endl;
		return EXIT_FAILURE;
	}
	int units(0);
	try
	{
		units = std::stoi(argv[1]);
	}
	catch(std::exception e)
	{
		cout << "Invalid command line argument" << endl;
		return EXIT_FAILURE;
	}
	cout << calculateAmount(units) << endl;
	return EXIT_SUCCESS;
}