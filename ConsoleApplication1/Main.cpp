#include "VectorTest.h"
#include <iostream>

int main()
{
	std::cout << "Testing our class...\n";
	VectorTest * VT = new VectorTest();

	std::vector<std::string> * resultVector = VT->TypeAhead( "AdamRules", 10 );

	for( size_t i = 0; i < resultVector->size(); i++ )
	{
		std::cout << resultVector->at( i ) << std::endl;
	}
}
