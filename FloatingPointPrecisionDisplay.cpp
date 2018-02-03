#include <stdint.h>
#include <iostream>
/*
 * See also : http://class.ece.iastate.edu/arun/CprE281_F05/ieee754/ie5.html
 */

union FloatingPointSinglePrecisionIEEE754 
{
    struct 
	{
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } raw;
    float f;
} fnumber;

union FloatingPointDoublePrecisionIEEE754 {
    struct 
	{
        uint64_t mantissa : 52;
        uint64_t exponent : 11;
        uint64_t sign : 1;
    } raw;
    double d;
} dnumber;



int main() 
{

	std::cout << "sign\texponent\tmantissa\n";
    fnumber.f = -6.8;
	std::cout << fnumber.raw.sign << "\t" << fnumber.raw.exponent << "\t\t" << fnumber.raw.mantissa << std::endl;


    dnumber.d = -6.8;
	std::cout << dnumber.raw.sign << "\t" << dnumber.raw.exponent << "\t\t" << dnumber.raw.mantissa << std::endl;

return 0;
}

