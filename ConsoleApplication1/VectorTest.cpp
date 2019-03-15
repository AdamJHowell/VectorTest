#include "VectorTest.h"


VectorTest::VectorTest()
{}


VectorTest::~VectorTest()
{}


std::vector<std::string> * VectorTest::TypeAhead( std::string words, int count )
{
	std::vector<std::string> * resultVector = new std::vector<std::string>;

	for( int i = 0; i < count; i++ )
	{
		resultVector->push_back( words );
	}
	return resultVector;
}
