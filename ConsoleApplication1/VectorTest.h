#pragma once
#include <vector>
#include <string>

class VectorTest
{
	public:
	VectorTest();
	~VectorTest();

	std::vector<std::string> * TypeAhead( std::string words, int count );
};
