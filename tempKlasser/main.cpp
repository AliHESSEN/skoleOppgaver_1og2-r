#include <iostream>
#include "Array.h"


int main()

{
	try  // lager tryblock fordi vi har unntak
	{
		const size_t numValues{ 20 };
		Array<int> myArr{ numValues };
		//fyller arraet med elementer

		for (size_t i = 0; i < numValues; ++i)
		{
			myArr[i] = i + 1;
		}
		for (size_t i = 0; i < numValues; ++i)
		{
			std::cout << myArr[i] << std::endl;
		}
	}
	catch (const std::out_of_range& exeption) // skriver ut feilen
	{
		std::cout << exeption.what() << std::endl; // what() henter ut teksten jeg skrev inn i expetion
	}
}