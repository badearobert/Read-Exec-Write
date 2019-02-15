#include "Algorithm.hpp"
#include <iostream>

void CAlgorithmImpl_1::executeAlgorithm(DataSet& message)
{
	std::cout << "Applying algorithm for CAlgorithmImpl_1" << std::endl;
   message.output.temp = message.input.temp * 2;
	// @TODO: update message.output data based on message.input
}

void CAlgorithmImpl_2::executeAlgorithm(DataSet& message)
{
	std::cout << "Applying algorithm for CAlgorithmImpl_2" << std::endl;

	// @TODO: update message.output data based on message.input
}

